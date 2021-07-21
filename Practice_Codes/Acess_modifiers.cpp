#include <iostream>
using namespace std;
class Employee{
    protected:
    int salary;

    public:
    float set_salary(int salary)
    {
    if (salary > 8000)
    {
        this->salary = salary;
        cout<<this->salary;
    }
    else
    {
        cout<<"Salary is less"<<endl;
    }
    }

    float get_salary()
    {

        return salary;
    }


};

class Facult : public Employee
{       public:

    float set_salary(int salary)   // it is called fucntion oer riding that same parameter function we are  using in child class withsome modifications...
    {
        if(salary>20000)
        {
            this->salary = salary; /* here we well get error because salary is private and we cant use it in a child class if we want to use it then
                                      then we have to do it "protected" mode                              */
        }
        else
        {
            cout<<"NO salary child class"<<endl;

        }

    }

};

int main()
{
    Facult e;

    e.set_salary(78);




}
