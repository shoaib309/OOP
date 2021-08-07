/*Setters and getters are used when the class member is private and we want to initallize it and want to get the vaue and we can't do this with
objects because the member is private and we can't acess it.... So we will use the getters and setters function because private member can be acessed within the
function and remember one thing if we are using function prototype it also means that... we're are using this member within the class
and onething more if the member is public then its very easy to initallize it we just have to make an object and we can initallize it but it's a bad practice
according to sir nauman :)
*/

#include <iostream>
using namespace std;
class Employee
{
    string  name;

    public :
       string get_name();
       void   set_name(string n);


} ;

void Employee :: set_name(string name)
{
    this -> name = name  ;


}

string Employee :: get_name()
{
    return name ;

}


int main()
{
    Employee e;

    e.set_name("Shoaib");
    cout<<"The legend "<<e.get_name();

    return 0;

}
