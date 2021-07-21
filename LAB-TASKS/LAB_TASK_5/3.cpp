#include<iostream>
#include <fstream>
#include<iomanip>
using namespace std;
int main()
{
    string movieName;
    double adultTicketP,childTicketP,adultTicketSold,childTicketSold,percentGrossamount;
    double grossAmount, amountDonated, netSaleAmount,ticketSold;

    cout<<"The movie name: ";
    getline(cin,movieName);

    cout<<"Adult ticket price: ";
    cin>>adultTicketP;

    cout<<"Child ticket price: ";
    cin>>childTicketP;

    cout<<"Number of Adult ticket Sold: ";
    cin>>adultTicketSold;

    cout<<"Number of child  ticket Sold: ";
    cin>>childTicketSold;

    cout<<"Percentage of Gross amount to be donated to the charity: ";
    cin>>percentGrossamount;


    ticketSold = adultTicketSold + childTicketSold;
    grossAmount = (adultTicketP * ticketSold) + (childTicketP*ticketSold);
    amountDonated = (grossAmount * percentGrossamount)/100;
    netSaleAmount = grossAmount - amountDonated;

    fstream file;

    file.open("Movie.txt",ios::out);
    if(!file) cout <<"File not created ";

    else
    {   file<<"-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-"<<endl;

        file<<"Movie Name: "<<setfill('.')<<setw(50)<<"  "<<movieName<<endl;
        file<<"Number of Ticket Sold: "<<setw(30)<<" "<<setfill(' ')<<setw(10)<<ticketSold<<endl;
        file<<"Gross Amount: "<<setfill('.')<<setw(50)<<"$ "<<grossAmount<<endl;
        file<<"Percentage of Gross Amount Donated: "<<setfill(' ')<<setw(15)<<percentGrossamount<<"%"<<endl;
        file<<"Amount Donated: "<<setfill('.')<<setw(50)<<"$ "<<amountDonated<<endl;
        file<<"Net Sale: "<<setw(50)<<"$ "<<netSaleAmount<<endl;
    }






}
