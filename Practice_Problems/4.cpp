#include <iostream>
using namespace std;
int main()
{

    int cpp,functionalEnglish,EE,percentage,obtained;
    int total = 300;
    cout<<"Enter the C++ Marks: ";
    cin>>cpp;

    cout<<"Enter the Functional English Marks: ";
    cin>>functionalEnglish;

    cout<<"Enter the EE Marks: ";
    cin>>EE;

    obtained = cpp+functionalEnglish+EE;

    percentage = obtained*100/total;

    if(percentage>90)
    {
        cout<<"Congratulations You got an 'A' grade..."<<endl;

    }

    else if ((percentage<=90 ) && (percentage>=80))
    {
        cout<<"You got a 'B' grade..."<<endl;

    }

    else if ((percentage<=80 ) && (percentage>=70))
    {
        cout<<"You got a 'C' grade..."<<endl;

    }

    else if ((percentage<=70 ) && (percentage>=60))
    {
        cout<<"You got a 'D' grade..."<<endl;

    }

    else if (percentage<60)
    {
        cout<<"You are fail..."<<endl;

    }




    }






