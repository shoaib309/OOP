#include <iostream>
using namespace std;

namespace first
{
    int var=1;

}

namespace second
{
    int var=2;

}

int main()
{   using namespace first;
    /*now if we are doing this then we don't have to write the "first::var" we can simply write the  "var" but if both namespace have the same
    variable and we are shortcut for both then it will be ambigous and the compiler will not understand it that the which var we are talking about */


    cout<<var<<endl;
    cout<<second::var<<endl;

}
