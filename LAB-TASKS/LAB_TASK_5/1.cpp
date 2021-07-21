#include <iostream>
#include <fstream>
using namespace std;
int main()
{   int counter = 0;
    fstream line;
    line.open("akhtar.txt",ios::in);
    if(!line)
    {
        cout<< "no such file ";
    }
    else {

        string s;
        while(getline(line,s))
        {   counter+=1;
            cout<<s<<endl;
        }
        cout<<endl;
        cout<<"Number of line: "<<counter;
    }
}
