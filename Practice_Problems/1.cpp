#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;

struct Book
{
    int id[5];
    int price[5];
    int pages[5];

    void set_value()
    {
        int pricee=10;
        for(int i=0; i<5; i++)
        {
            cout<<"Enter the Book id: ";
            cin>>id[i];

            cout<<"Enter the Book Price: ";
            cin>>price[i];
            pricee++;


            cout<<"Enter the Book pages: ";
            cin>>pages[i];

            cout<<endl;

        }
    }

    void most_expensive_book()
    {
        int n=0, expensive=0, index =0;

        for(int i=0; i<5; i++)
        {
            n = price[i];

            if(n>expensive)
            {
                expensive = n;
                index=i;

            }


        }

        cout<<"Id of most expensive book is: "<<id[index]<<endl;
        cout<<"Price of most expensive bok is: "<<price[index]<<endl;
        cout<<"Pages of most expensive book is: "<<pages[index]<<endl;


    }







};


int main()
{

    Book b;

    b.set_value();
    b.most_expensive_book();





}
