#include <iostream>
using namespace std;
class Employee
{   public:
    int no;
    string name;
    void fun();
    int fun2(int n);



};


int main()
{   Employee e;
    e.fun();
   cout<< e.fun2(334);

}

void Employee::fun()
{


    name = "shoaib";
    cout<<name<<endl;

}

int Employee::fun2(int n)
{

    no = n;
    return n;

}
