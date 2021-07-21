#include <iostream>
using namespace std;
int seprate(int arr[10])
{
    int a = 0;
    int b = 0;
    int even[10];
    int odd[10];

    for(int i=0;i<10;i++)
    {
        if (arr[i]%2==0)
        {
        even[a]=arr[i];
        a++;
        }
        else
        {
        odd[b]=arr[i];
        b++;
        }
}
cout<<"Even array = ";
for(int j=0;j<a;j++)
{
    cout<<even[j]<<" ";
}
cout<<endl;
cout<<"Odd array = ";
for(int j=0;j<b;j++)
{
    cout<<odd[j]<<" ";
}
}
int main()
{
int students[10] = {3,4,2,2,2,0,7,5,4,100};
    seprate(students);
}
