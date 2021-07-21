//Write a program to print the address of the pointer to a variable whose value is input from user.
#include <iostream>
using namespace std;
int main()
{

    int a;
    int *p;

    cout<<"enter the integer to find the address  ";
    cin>>a;
    p = &a;

    cout<<"the address of 'a' variable through 'p' pointer is "<<p;


}
