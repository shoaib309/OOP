
#include <iostream>
#include <string>
using namespace std;
int main()
{    int no,formula,remainder;
    int revers=0;
    cout<<"Enter the Number to reverse ";
    cin>>no;
    while(no>0)
    {
    remainder = no%10;
    revers= revers*10+remainder;
    no = no/10;
    }
    cout<<"The reversed number is "<<revers;
}
