#include <iostream>
using namespace std;
class Employee {
    public:
        int salary;

    Employee(); // constructor;

};
Employee::Employee()
{
    salary = 10000;
    cout<<"Employee Created"<<endl;

}
int main()
{
    Employee e1;
    cout<<e1.salary<<endl;
    e1.salary = 10009;
    cout<<e1.salary<<endl;

    Employee e2;
    cout<<e2.salary<<endl;


}
