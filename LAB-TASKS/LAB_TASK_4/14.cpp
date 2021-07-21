
#include <iostream>
using namespace std;
int sum(int a,int b )
{
    int *c =  &a;
    int *d =  &b;
    cout<< "The sum of "<< a <<" and "<<b<<" is "<<*c+*d<<endl;
}
int main()
{
int a =4, b=5;
cout<<"a = "<<a<<endl;
cout<<"b = "<<b<<endl;
sum(a,b);
}
