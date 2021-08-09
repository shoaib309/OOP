#include <iostream>
using namespace std;
void addressCPP()
{

    string studentName, street,city,state;
    int houseNo,appartmentNo,postalCode;

    cout<<"Enter the student Name: ";
    cin>>studentName;

    cout<<"Enter the street name: ";
    cin>>street;

    cout<<"Enter the city name: ";
    cin>>city;

    cout<<"Enter the state name: ";
    cin>>state;

    cout<<"Enter the house Number: ";
    cin>>houseNo;

    cout<<"Enter the appartmentNo: ";
    cin>>appartmentNo;

    cout<<"Enter the postalCode: ";
    cin>>postalCode;

    cout<<endl<<endl;

    cout<<"Student Name: "<<studentName<<endl;
    cout<<"Street Name:"<<street<<endl;
    cout<<"City Name: "<<city<<endl;
    cout<<"State Name: "<<state<<endl;
    cout<<"House No: "<<houseNo<<endl;
    cout<<"AppartmentNo: "<<appartmentNo<<endl;
    cout<<"Postal Code: "<<postalCode<<endl;


}

int main()
{
    addressCPP();


}
