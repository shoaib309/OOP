#include <iostream>
using namespace std;
int main()
{
    char seats [13][6] = {{'*','*','x','*','X','X'},{'*','X','*','X','*','X'},{'*','*','X','X','*','X'},{'X','*','X','*','X','X'}
                            ,{'*','X','*','X','*','*'},{'*','X','*','*','*','X'},{'X','*','*','*','X','X'},{'*','X','*','X','X','*'}
                            ,{'X','*','X','X','*','X'},{'*','X','*','X','X','X'},{'*','*','X','*','X','*'},{'*','*','X','X','*','X'}
                            ,{'*','*','*','*','X','*'}};
    string firstClass,businessClass,economyClass;
    string ticketType;
    string desiredSeat;
    for(int i=0;i<13;i++)
    {   cout<<"Row  "<<i+1<<"    ";
        for(int j=0; j<6;j++)
        {

            cout<<seats[i][j]<<"  ";
        }
        cout<<endl;

    }

    cout<<"Please select the ticket type\npress '1' for First Class\nPress '2' for Business Class\nPress '3' for Economy Class\n\n";
    cin>>ticketType;

    {   cout<<"   Available seats are "<<endl;
        for(int i=0;i<2;i++)
        {
            for(int j=0;j<5;j++)
            {
                if(seats[i][j] =='*')
                cout<<i<<j<<endl;
            }
        }
        cout<<"Enter the desired seat ";
        cin>>desiredSeat;
        cout<<"You have booked the seat "<<desiredSeat;



        }
        if(ticketType =="2")
    {
        cout<<"   Available seats are "<<endl;
        for(int i=2;i<7;i++)
        {
            for(int j=0;j<5;j++)
            {
                if(seats[i][j] =='*')
                cout<<i<<j<<endl;
            }
        }
        cout<<"Enter the desired seat ";
        cin>>desiredSeat;
        cout<<"You have booked the seat "<<desiredSeat;



        }

        if(ticketType =="3")
    {   cout<<"   Available seats are "<<endl;
        for(int i=7;i<13;i++)
        {
            for(int j=0;j<5;j++)
            {
                if(seats[i][j] =='*')
                cout<<i<<j<<endl;
            }
        }
        cout<<"Enter the desired seat ";
        cin>>desiredSeat;
        cout<<"You have booked the seat "<<desiredSeat;



        }


}




