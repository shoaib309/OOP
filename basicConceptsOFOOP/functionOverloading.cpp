#include <iostream>
using namespace std;
class Employee {
public :
    // class members
    string name;
    int salary;

    // class Method
    void sign_in();

    // Function overloading or Constructor overloading or Methon Overloading
    Employee();
    Employee(int salary, string name);

    /* What is Overloading
    Two functions or constructors or Methods having same name but different type of parameters are called as
    function Overloading or Constructor overloading or Method Overloading.. Here it will be called as Constructor overloading.
    */

};

void Employee :: sign_in()
{

     cout<<"Signing in"<<endl;
    cout<<"Name: "<<name<<endl;
    cout<<"Salary : "<<salary<<endl;
}

// Creating a body of a Without parameter constructor.

Employee::Employee()
{
    cout<<"Ist Constructor"<<endl;
    name   = "Shoaib Akhtar Babar";
    salary = 10000;

}
// Creating  a body of a Parameterized constructor.
Employee::Employee(int salary , string name )
{
    cout<<"2nd Constructor"<<endl;
    this->salary = salary ;
    this->name   = name ;

/* now this "this" is indicating that that the "salary" and the "name is the member of the class because we have a same local
 variable "salary " and "name" as well */

}

int main()
{
    Employee *e1;

    e1 = new Employee();

    /* now if we are not givin any parameters then the first constructor will be called and
    if we are giving parametes then the second constructor will be called and also here we have choice wheather we write the brackets or not */

    Employee *e2;

    e2 = new Employee(70000,"Shoaib Akhtar Babar ");

    cout<<e1->name<<endl;
    cout<<e1->salary<<endl<<endl;

    cout<<e2->name<<endl;
    cout<<e2->salary<<endl;

    e1->sign_in();
    cout<<endl;
    e2->sign_in();





}

