#include <iostream>
using namespace std;
int second_min(int arr[])
{int mini = arr[0];
 int second_mini = arr[0];
for(int i=0;i<10;i++)
{
    if(arr[i]<mini)
    {
    mini = arr[i];
    }
}
    cout<<"minimum = "<<mini<<endl;

for(int i=0;i<10;i++)
{
    if(arr[i]<second_mini || arr[i]>mini )
    {
    second_mini = arr[i];
    }
}
    cout<<"Second minimum = "<<second_mini;
}
int main()
{
int students[10] = {3,4,2,8,4,3,7,5,4,100};
    second_min(students);
}
