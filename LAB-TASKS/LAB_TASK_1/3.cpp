#include <iostream>
using namespace std;
int main()
{
int num;
cout <<"enter the integer to check whether its even or odd ";
cin>> num;
 if(num==0)
{ cout << "neither even nor odd" << endl;
} else if(num%2==0) {
  cout << "its even";
} else {
cout << "its odd";
}
return 0;
}
