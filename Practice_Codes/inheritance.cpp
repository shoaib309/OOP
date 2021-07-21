#include <iostream>
using namespace std;
 class car
{
    public:
    string name ;
    int no;


};

class sports_car : public car
{   public:
    string alaram;
    string fuel;
    sports_car();
    sports_car(int a);
};

sports_car::sports_car()
{

    alaram = "NEUTRAL";
    fuel = "ANY_COMPANY";
    name = "ANY COMPANY";
    no = 000000;
    cout<<"CHILD CONSTRUCTOR"<<endl;

}
sports_car::sports_car(int a)
{

    cout<<"CHILD 2ND CONSTRUCTOR"<<endl;

}

int main()
{

    car c;
    sports_car s(8);

    c.name = "Corola";
    c.no = 90980;

   cout<<s.name;

}
