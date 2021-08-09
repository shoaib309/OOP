#include <iostream>
using namespace std;
int main()
{

    string vote;
    int pti=0,ppp=0;

    for(int i=0; i<5;i++)
    {
        cout<<"Press 'a' to vote PTI and Press 'b' to vote PPP: ";
        cin>>vote;
        if((vote == "a") ||(vote == "A"))
        {
            pti++;

        }
        else if((vote == "b") ||(vote == "B"))
        {
            ppp++;

        }

        else
        {
            cout<<"Wrong Input";

        }


    }
cout<<"PTI Votes:"<<pti<<endl;
cout<<"PPP Votes:"<<ppp<<endl;

    if(pti==ppp)
    {
        cout<<"election Tied "<<endl;
    }


    else if (pti>ppp)
    {
        cout<<"PTI won the election"<<endl;


    }

    else
    {
        cout<<"PPP won the election"<<endl;

    }




}

