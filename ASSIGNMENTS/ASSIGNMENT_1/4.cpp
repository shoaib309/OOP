#include<iostream>
using namespace std;
int upper(int arr[5][5])
{
for(int i=0;i<5;i++)
{
    for(int j=0;j<i;j++)
    {
        cout<<""<<"  ";
    }

    for(int k=i;k<5;k++)
    {
    cout<<arr[i][k]<<" ";
    }
    cout<<endl;
}
}
int main()
{
    int arr[5][5] ={{2,3,1,5,0},{7,1,5,3,1},{2,5,7,8,1},{0,1,5,0,1},{3,4,9,1,5}};
    upper(arr);
}

