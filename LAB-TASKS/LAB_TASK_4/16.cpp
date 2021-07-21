#include <iostream>
using namespace std;
int max_using_pointer(int a, int b)
{
    int *c  = &a;
    int *d  = &b;
    if (*c>*d)
    {
        cout<<*c<<" is  greater than "<<*d;
    }
    else
    {
    cout<<*d<<" is greater than "<<*c;
    }
}
int main()
{
    max_using_pointer(100,43);
}
