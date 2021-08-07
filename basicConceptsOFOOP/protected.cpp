#include <iostream>
using namespace std;

class Employee
{

    protected : // Now this protected means this "pay_rate" member  can be acessed by the child's(inheritance) but if it was privated then the also the chid can't be acessed it.
    int pay_rate ;

    public:
    void set_pay_rate(int pay_rate);
    int get_pay_rate();
    Employee(); // constructor
};
Employee::Employee()
{
pay_rate = 0;
}
void Employee :: set_pay_rate(int pay_rate )
{
    if(pay_rate>14)
    {
     this->pay_rate = pay_rate ;

    }
    else
    {
        cout<<pay_rate <<"Pay rate can't be setted in the parent class Employee "<<endl<<endl;

    }


}

int Employee :: get_pay_rate()
{
    return pay_rate;

}

class FacultyMember : public Employee
{

public :
 void set_pay_rate(int pay_rate); // funtion overriding

};

void FacultyMember :: set_pay_rate(int pay_rate )
{

if(pay_rate>25)
    {
     this->pay_rate = pay_rate ;

    }
    else
    {
        cout<<pay_rate<<" Pay rate can't be setted in the child class FacultyMember"<<endl<<endl;;

    }

}

int main()
{
    Employee e;

    e.set_pay_rate(15);
    cout<<"Pay rate in parent class Employee: " <<e.get_pay_rate()<<endl<<endl;

    FacultyMember f;

    f.set_pay_rate(15);
    cout<<"Pay rate in child class Faculty Member: "<<f.get_pay_rate();


}
