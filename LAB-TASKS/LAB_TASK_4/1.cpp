#include <iostream>
using namespace std;
int Copy(int arr[10])
{
    int cop [10];
     for(int i=0;i<10;i++)
     {
        cop[i]=arr[i];
        cout<<"Cop["<<i<<"] = "<<cop[i]<<endl;

     }

}
int main()
{
    int marks[10] = {1,2,3,4,5,33,23,4,2,2};
    Copy(marks);
}
