#include <iostream>
using namespace std;
class Employee
{

    public:
    string name;
    int id;

};

class Faculty : public Employee
{
    public :

    bool office;


};

class Guards : public Employee
{

    public :
        bool guns;

};

int main()
{
    // Remember onething that we can acess "parent class members" with child object but we can't acess "child classs members" with "parent object"
    Faculty f;
    f.name = "Shoaib Akhtar";
    f.id = 124;
    cout<<"Class Faculty"<<endl<<endl;
    cout<<"Name: "<<f.name<<endl;

    cout<<"ID: "<<f.id<<endl<<endl;



    Guards g;

    g.name = "Wahab Riaz";
    g.guns = true;
    g.id = 598;

    cout<<"Class Guards"<<endl<<endl;
    cout<<"Name: "<<g.name<<endl;

    cout<<"ID: "<<g.id<<endl;


}


