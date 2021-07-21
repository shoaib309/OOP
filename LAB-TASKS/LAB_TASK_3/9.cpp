#include <iostream>
#include <string>
using namespace std;
int main()
{    int orignalNo,no,formula,remainder;
    int revers=0;
    cout<<"Enter the Number to reverse ";
    cin>>orignalNo;
    no=orignalNo;
    while(no>0)
    {
    remainder = no%10;
    revers= revers*10+remainder;
    no = no/10;
    }
    if(revers==orignalNo)
    {
        cout<<"Its a palindrome number ";
    }
    else
    {
        cout<<"Its not a palindrome number ";
    }

}
