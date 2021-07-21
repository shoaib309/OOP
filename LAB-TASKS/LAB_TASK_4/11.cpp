#include <iostream>
using namespace std;
int sumOf_2d_Array(int arr1[2][3], int arr2[2][3])
{int s[2][3];
// nested loop sum the 2d array
for(int i=0;i<2;i++)
{
    for(int j=0;j<3;j++)
    {
        s[i][j]=arr1[i][j]+arr2[i][j];
    }
    }
    // this loop will print the sum of array
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<s[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main()
{
int arrr1[2][3] = {{2,3,4},{3,5,2}};
int arrr2[2][3] = {{2,3,4},{3,5,2}};

    sumOf_2d_Array(arrr1,arrr2);
}
