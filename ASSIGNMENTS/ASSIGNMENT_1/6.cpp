#include <iostream>
using namespace std;
int addArray(int arr1[3][3],int arr2[3][3])
{
int sum = 0;
for(int i=0;i<3;i++)
{
    for(int j=0;j<3;j++)
    {
        sum+=arr1[i][j]+arr2[i][j];
    }
}
cout<<"Sum = "<<sum;
}
int main()
{
    int a[3][3] = {{1,1,1},{1,1,1},{1,1,1}};
    int b[3][3] = {{1,1,1},{1,1,1},{1,1,1}};
    addArray(a,b);
}
