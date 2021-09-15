#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;

void swap_using_pass_by_refrence(int *x, int *y)
{


    int temp;

    temp = *x;
    *x = *y;
    *y = temp;

}


int main()
{

    int A = 10, B=25 ;

    cout<<"Before swapping:"<<endl;
    cout<<"A = "<<A<<endl;
    cout<<"B = "<<B<<endl;

    swap_using_pass_by_refrence(&A,&B);

    cout<<"After swapping:"<<endl;
    cout<<"A = "<<A<<endl;
    cout<<"B = "<<B<<endl;







}
