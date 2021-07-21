#include <iostream>
using namespace std;
int max_min(int arr[10])
{
    int maxi = arr[0];
    int mini = arr[0];

    for(int i=0;i<10;i++)
    {
        if(arr[i]>maxi)
        {
            maxi = arr[i];
        }
    }
       cout<<"MAX = "<<maxi<<endl;;
    for(int j=0;j<10;j++)
    {
        if(arr[j]<mini)
        {
            mini = arr[j];
        }
    }
        cout<<"Minimum = "<<mini;

}
int main()
{   int students[10] = {3,4,2,2,2,0,7,5,4,100};
    max_min(students);
}

