#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;

int main()
{



    int n, n1, *p, *p1;

    cout<<"Enter the value of the first integer: ";
    cin>>n;

    cout<<"Enter the value of the 2nd integer: ";
    cin>>n1;

    p = &n;

    p1 = &n1;

    *p = *p+10;

    *p1 = *p1+10;


    cout<<"The value of the first integer is: "<<n<<endl;
    cout<<"The value of the 2nd integer is: "<<n1<<endl;



}
