#include<iostream>
using namespace std;
int lengthOfString( )
{
    char b[30];
    cout<<"Enter the string: ";
    cin>>b;
    int c=0;
    for(int i=0; b[i]!='\0';i++ )
    {
        c++;
    }
    cout<<"Length of "<<b<<" is "<<c;
}
int main()
{
    lengthOfString();
}
