#include <iostream>
using namespace std;
class Employee {

    public:
        int m1;
        double m2;

       Employee(int i);
       Employee(double j);



};
Employee::Employee(int i)
{
    m1 = i;

}
Employee::Employee(double j)
{
    m2 = j;

}

int main()
{
    Employee *p,*q;
    p = new Employee(2);

    q = new Employee(3.0);

    if(p->m1 > q->m2)
    {
        cout<<p->m1<<" is max"<<endl;


    }
    else
    {
    cout<< q->m2<<" is max";

    }



}
