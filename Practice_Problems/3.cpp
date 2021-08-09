#include <iostream>
using namespace std;
int main()
{

    char ch;
    cout<<"Enter any character from a to z: ";
    cin>>ch;

    if(int(ch)>=97 && int(ch)<=122 )
    {
        for(int i=1;i<=10;i++)
        {
            cout<<int(ch)<<" x "<<i<<" = "<<int(ch)*i<<endl;


        }

    }
    else
    {
        cout<<"Wrong Input"<<endl;
    }





}
