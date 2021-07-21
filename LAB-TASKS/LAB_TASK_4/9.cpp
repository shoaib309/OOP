#include<iostream>
using namespace std;
int del_element_array(int arr[10])
{
cout<<"Original array = ";
for(int i=0;i<10;i++)
{
    cout<<arr[i]<<" ";
}
cout<<endl;
int pos;
cout<<"Enter the desired position you want to delete the element from an array ";
cin>>pos;
cout<<"After deleting the "<<arr[pos]<<" at index "<<pos<<"  the new arr is = ";
for(int i=pos;i<10;i++)
{
    arr[i]=arr[i+1];
}
for(int j=0;j<9;j++)
{
    cout<<arr[j]<<" ";
}
}
int main()
{
int students[10] = {3,4,2,2,2,0,7,5,4,100};
    del_element_array(students);
}
