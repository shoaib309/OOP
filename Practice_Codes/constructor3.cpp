#include <iostream>
using namespace std;
class Employee{
    public:
        int salary;

        Employee();            // constructor
        Employee(int salary); //  constructor



};

Employee::Employee()
{

    salary = 1000;
    cout<<"Ist constructor "<<endl;
}

Employee :: Employee(int salary)
{

        this->salary = salary;
        cout<<"2nd Constructor"<<endl;

}


int main()
{
    Employee e1;
    cout<<e1.salary<<endl;

    Employee e2;
    e2.salary = 5;
    cout<<e2.salary<<endl;

    Employee e3(70000);
    cout<<e3.salary;


}
