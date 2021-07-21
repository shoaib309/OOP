#include <iostream>
using namespace std;
class Employee {

public:
    int salary;


    Employee(); // constructor;
    Employee(int salary);
   ~Employee();

};

Employee :: Employee(int salary)
{

    this->salary = salary;
    cout<<"2 constructor"<<endl;

}

Employee::Employee()
{
    salary = 0;
    cout<<"ist constructor"<<endl;


}

Employee::~Employee()
{
    cout<<"Destructor"<<endl;


}

int main()
{
    Employee *p;
    p = new Employee(7888);
    cout<<p->salary<<endl;
    delete p;

}
