#include <iostream>
using namespace std;
template <class T>

    T find_max(T a, T b)
    {
        T result;

        result = (a>b) ? a:b ;

        /* if a is > b then result will be equal to the a else result will
        be equal to the b */

        return result;


    }

    int main()
    {
        int x,y,k;

        x = 25;
        y = 30;

        k = find_max<int>(x,y);
        // now by doing this <int> the T will be replaced with int at the run time

        cout<<"Max for int : "<< k <<endl;

        string a ,b , l;
        a = "Ali";
        b = "usman";
        l = find_max<string>(a,b);

        cout<<"Max for string: "<<l<<endl;








    }
