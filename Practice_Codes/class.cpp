#include <iostream>
using namespace std;
class Employee{

public:
        string name;
        void sign_in();   // prototype
        void promoted();  // prototype


};

void Employee::sign_in()
{

    cout<<"Welcome you have signed in sucessfully"<<endl;;

}

void Employee::promoted()
{

    cout<<"Congratulation you have promoted"<<endl;;

}

int main()
{
    Employee e1;

    e1.name = "Shoaib";
    cout<<e1.name<<endl;
    e1.sign_in();
    e1.promoted();
    return 0;


}
