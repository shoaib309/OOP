#include <iostream>
using namespace std;

void add(float x, float y)
{

    cout<<"Result = "<<x+y;

}

void sub(float x, float y)
{
    if(x>y)
        cout<<"Result = "<< x-y;

    else
        cout<< "Result = "<<y-x;
}

void mul(float x,float y)
{
    cout<< "Result = "<<x*y;

}

void div(float a, float b)
{

        cout<< "Result = "<<a/b;


}
void fun() // main function that will call the other functions that will perform the the operations
{
    float n1 , n2;
    string operation;

    cout<<"Enter the first number: ";
    cin>>n1;

    cout<<"Enter the second number: ";
    cin>>n2;

    cout<<"what you want to perform on these numbers \npress 1 for add \npress 2 for subtraction \npress 3 for multiplication \npress 4 for division"<<endl;
    cin>>operation;

    if(operation=="1")
    {
        add(n1,n2);

    }

    else if(operation=="2")
    {
        sub(n1,n2);

    }


    else if(operation=="3")
    {
        div(n1,n2);

    }


    else if(operation=="4")
    {
        div(n1,n2);

    }

    else
    cout<<"Wrong Input"<<endl;

}


int main()
{
    fun();
    return 0;


}
