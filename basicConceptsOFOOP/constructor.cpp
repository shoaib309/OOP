#include <iostream>
using namespace std;
class Employee {
public :
    string name;
    int salary;      // Memebers or Fields

    void sign_in();   // Method

    Employee();     // constructor....To identifying a constructor there are two rulesz__
                    // 1: it doesn't have a  any retrun type__ 2: it will have the same name that class have
                    // when the object has been created then it will be called automatically.


};

void Employee::sign_in()
{   cout<<"\nThese all are printed from the the function 'sign_in' "<<endl<<endl;
    cout<<"Signing in"<<endl;
    cout<<"Name: "<<name<<endl;
    cout<<"Salary : "<<salary<<endl;


}

Employee::Employee()
{
    name = "Shoaib Akhtar Babar";
    salary   = 234;
    cout<<"Employee Created ------ "<<"Its printed from the constructor"<<endl; // it's just a check wheen the object will be created it will automatically called and will cout this message.

}

int main()
{
    Employee *e;
    e = new Employee;  // here the instance has been created so the constructor will be automatically called and will asign the values to the class members

    cout<<e->name<<" ------Its printed from the member class "<<endl; // here we are printing the class members but we can call the sign in function as well...
    cout<<e->salary<<" ------Its printed from the member class  "<<endl<<endl;

    e->sign_in();


}
