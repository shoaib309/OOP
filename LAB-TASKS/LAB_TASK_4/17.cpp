#include <iostream>
using namespace std;
int fac(int a)
{   int *b  = &a;
    int fac= 1;
    for (int i = *b;i>=2;i--)
    {
        fac = fac*i;
    }
    cout<<"factorial of "<<*b<<" is "<<fac;
}
int main()
{
fac(4);
}

