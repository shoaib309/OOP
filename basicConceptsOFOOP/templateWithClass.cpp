#include <iostream>
using namespace std;
template <class T>
class Employee
{
    T name;
    T caste;

    Employee(T name, T caste); // constructor

    T Find_max(T a, T b);

};

// Now whenever we have to define a function or constructor we will write this "template<class T>" before the defination...

// defining a constructor
template <class T>
Employee<T>::Employee(T name, T caste)
{

    this->name = name;
    this->caste = caste;

}

//Defining the body of the function Find_max

template <class T>

T Employee<T> :: Find_max(T a, T b)
{

    if(a>b)
    {
        cout<<a<<endl;

    }

    else
    {
        cout<<b<<endl;
    }


}

int main()
{
    Employee <string> e;





}


