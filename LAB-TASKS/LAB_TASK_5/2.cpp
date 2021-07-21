#include <iostream>
#include <fstream>
using namespace std;
int main()
{   fstream file;
    int table, f;
    string fn;
    cout<<"Table Value: ";
    cin>>table;
    cout<<"Final value: ";
    cin>>f;
    cin.ignore();
    cout<<"File Name: ";
    getline(cin,fn);

    file.open(fn,ios::out);
   if(!file) cout<<"No such file created ";
    else{
    file <<fn;
    file <<" is :"<<endl;
    for(int i=1;i<=f;i++)
    {

        file <<table<<" x "<<i<<" = "<<table*i<<endl;;

    }
    file.close();
    cout<<endl;

}   fstream fille;
    fille.open(fn,ios::in);
    if(!fille) cout<<"No such file ";

    else
    {
        string s;
        while(getline(fille,s))
        cout<<s<<endl;

   }
    fille.close();
}
