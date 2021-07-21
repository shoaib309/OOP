#include <iostream>
using namespace std;

class Employee {

    private :
    int salary;

    public:
     friend void acess_salary(int n);


};


void acess_salary( int n)
{
    Employee e;
   e.salary = n ;
    cout<<e.salary;
}
int main()
{
    acess_salary(899);


}
