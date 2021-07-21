#include <iostream>
using namespace std;
// here we are taking elements of arr[3][3] as input
    int input(int arr[3][3])
    {
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
        cout<<"arr["<<i<<"]["<<j<<"] = ";
        cin>>arr[i][j];
        }
    }
    }
    int display(int arr[3][3])
    {
    // here we are displayin elements of arr[3][3]
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
        cout<<arr[i][j]<<" ";

        }
        cout<<endl;
    }
    }
    // here we are calculating the sum of all elements
    int sum(int arr[3][3])
    { int s=0;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
        s+=arr[i][j];

        }

    } cout<<"Sum = "<<s<<endl;
    }

    // here we are calculating the row wise sum

     int rowSum(int arr[3][3])
     {   int r=1;
     for(int i=0;i<3;i++)
    {   int rs = 0;
        for(int j=0;j<3;j++)
        {
        cout<<arr[i][j]<<" ";
        rs+=arr[i][j];

        }
        cout<<" sum  of row "<<r<<" is "<<rs<<endl;
        r++;
}
}
int columnSum(int arr[3][3])
{   int c=1;
// here we are calculating the column wise sum
     for(int i=0;i<3;i++)
    {   int cs = 0;
        for(int j=0;j<3;j++)
        {
        cout<<arr[j][i]<<" ";
        cs+=arr[j][i];


        }
        cout<<" sum of column "<<c<< " is "<<cs<<endl;
        c++;
}
}
// here we are doing the transpose of the matrix
int transpose(int arr[3][3])
{
for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
        cout<<arr[j][i]<<" ";

        }
        cout<<endl;
    }
    }

int main()
{   while(true)
{
    int arr[3][3];
     string b,c;
     cout<<"press '1' for to take elements as input\npress '2' for display\npress '3' for sum of matrix \npress '4' sum of row elements\npress '5' for sum of column elements\npress '6' for transpose of matrix\n";
     cin>>b;
     if(b=="1")
     input(arr);
    else if (b=="2")
    display(arr);
    else if (b=="3")
    sum(arr);
    else if (b=="4")
    rowSum(arr);
    else if (b=="5")
    columnSum(arr);
    else if (b=="6")
    transpose(arr);
    cout<<"Continue (y/n)  ";
    cin>>c;
    if(c=="n")
    {
        break;
    }

    }
}
