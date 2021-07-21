#include <iostream>
using namespace std ;
class Employee
{
public:
    int salary;
    string name;

    Employee();



};

Employee::Employee()
{
    salary = 10000;
    cout<<"Its a constructor"<<endl;


}
int main()
{
    Employee e1,e2;
    cout<<e1.salary<<endl;
    e1.salary = 976;
    cout<<e1.salary<<endl;
    cout<<e2.salary<<endl;




}
