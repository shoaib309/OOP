#include <iostream>
using namespace std;
class Employee
{
    public:
        int salary;


 // constructor Overloading
        Employee();
        Employee(int salary);


       ~Employee(); // Destructor

};


Employee::Employee()
{
    salary = 10000;
    cout<<"Employee Created First Constructor"<<endl;


}
Employee:: Employee(int salary)
{

    this->salary = 70000;
    cout<<"Employee Created 2nd Constructor"<<endl;

}

Employee::~Employee()
{

    cout<<"Instances Removed"<<endl;
}

int main()
{

    Employee *e;

    e = new Employee(); // ist constructor is being called
    cout<<e->salary<<endl;;
    delete e; // here the value in e will be deleted....

    e = new Employee(70000);
    cout<<e->salary<<endl;;   // here 2nd constructor is being called... and at the moment only one constructor can be called....



}
