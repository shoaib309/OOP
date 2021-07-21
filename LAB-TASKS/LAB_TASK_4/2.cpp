#include <iostream>
using namespace std;
int duplicate(int arr [6])
{   int counter = 0;
    for(int i=0;i<6;i++)
    {
        for(int j=i+1;j<6;j++)
        {
            if(arr[i]==arr[j])
            {
                counter += 1;
            }
        }
    }
   cout<<"Total Number of same elements in the array is "<<counter;
}
int main()
{
    int student[6] = {4,5,2,4,1,1};
    duplicate(student);
}
