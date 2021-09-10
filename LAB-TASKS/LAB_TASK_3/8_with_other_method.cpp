#include <iostream>
using namespace std;

int main()
{


    int number ;

    cout<<"Enter the number that you want to reverse: ";
    cin>>number;

    cout<<"The reversed number is: ";
    while(number != 0)
    {

    cout<<number%10;
    number = number/10;

    }




}
