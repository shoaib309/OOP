#include <iostream>
using namespace std;
int merg( int arr1[5], int arr2[5])
{   int mergedArray[10];
    for(int i=0;i<5;i++)
    {
        mergedArray[i]= arr1[i];
    }

    for(int i=0;i<5;i++)
    {
        mergedArray[i]=arr1[i];
        mergedArray[i+5]=arr2[i];
    }
cout<<"Merged array = ";
    for(int i=0;i<10;i++)
    {
        cout<<mergedArray[i]<<" ";
    }

}
int main()
{
int a[5] = {1,4,7,3,5};
int b[5] = {66,88,99,33,55};
merg(a,b);
}
