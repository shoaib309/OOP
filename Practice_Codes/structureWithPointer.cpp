#include <iostream>
using namespace std;
struct student{

    string name ;
    int rollno;

};


int main()
{
    student s1;
    student *p; // declaring a pointer to hold the addresss of (student data type)....

    s1.name = "shoaib"; //1st method..... // we can do that with an other method using deference operator with basically follows the pointer....

    p = &s1; // now p is a pointer  which is holding the address of the s1....

    (*p).name = "new shoaib";  // second method....

    // this is equal to the.... s1.name = "shoaib"; and it is same as let suppose
    // int a = 5;
    // int *p;
    // cout<<a; // output = 5
    // p = &a; // p = address of "a" variable
    // cout<<*p; // output = 5

    p->name = "new new shoaib"; // third method


    cout<<"s1.name = "<<s1.name<<endl;     // ist method
    cout<<"*p.name  = "<<(*p).name<<endl;  // 2nd method
    cout<<"p->name  ="<<p->name<<endl;     // 3rd method

// output of last three lines will be same because on line no 29 we have given name = new mew shoaib so previous name values wil be erased new will be stored


}
