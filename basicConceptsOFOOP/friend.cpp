#include <iostream>
using namespace std;

class Employee
{
    string name;

    public:
    // its the prototype of the friend function and in friend function we can acess the private members and we have to pass the class as a parameter.
        friend void fun(Employee e);

};

void fun(Employee e)
{
    e.name = "Shoaib Akhtar Babar" ;
    cout<<e.name<<endl;
}

int main()
{   Employee j;

    fun(j);

}
