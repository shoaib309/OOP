#include <iostream>
using namespace std;
class Employee {
public:
    string name;
    int idNo;

    void sign_in(); // when these function are been made in the class then these will be called as "Method".
    void sign_out(); // Btw these function prototypes

};

void Employee :: sign_in() // This "Employee" indicates that the "sign_in" fuction belongs to the "class Employee"
{
        cout<<"Hello, You are signing in: "<<name<<endl;
        cout<<"Your id no is: "<<idNo<<endl;


}

void Employee :: sign_out()
{

    cout<<"Bye, Signing out: "+name<<endl;
    cout<<"Your id no is: "<<idNo<<endl;


}

int main()
{
    Employee *e;
     e = new Employee;

    e->name = "Shoaib Akhtar ";
    e->idNo = 6;

    e->sign_in();
    e->sign_out();


}
