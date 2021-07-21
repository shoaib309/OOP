#include <iostream>
using namespace std;
int diagonalSum(int arr[3][3])
{   int rsum=0,lsum=0;
    cout<<"Sum of right diagonal = ";
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(i==j)
            {
                rsum += arr[i][j];
            }
        }
}       cout<<rsum<<endl;
cout<<"SUm of left diagonal = ";
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(i+j==2)
            {
                lsum += arr[i][j];
            }
        }
}       cout<<lsum;

}
int main()
{   int a[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    diagonalSum(a);
}
