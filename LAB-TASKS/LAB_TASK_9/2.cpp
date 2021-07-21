#include <iostream>
using namespace std;
int main()
{
int arr[6] = {3,5,2,-4,8,11};
int sum = 7,v=1;
cout<<"[";
for(int i=0;i<5;i++)
{
    for(int j=0;j<5;j++)
    {
        if(arr[i]+arr[j+v]==sum)
        {
            cout<<"["<<arr[i]<<","<<arr[j+v]<<"]"<<",";
        }

    }
    v++;
} cout<<"]";
}
