#include <iostream>
using namespace std;
int mul_Array(int arr1[3][3],int arr2[3][3])
{
int mul = 1;
for(int i=0;i<3;i++)
{
    for(int j=0;j<3;j++)
    {
        mul*=arr1[i][j]*arr2[i][j];
    }
}
cout<<"mul of both arr1 and arr2 is = "<<mul;
}
int main()
{
    int a[3][3] = {{2,1,1},{1,1,1},{1,1,1}};
    int b[3][3] = {{1,1,1},{1,1,1},{1,1,1}};
    mul_Array(a,b);
}

