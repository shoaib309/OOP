#include <iostream>
#include <fstream>
using namespace std;
void display(int arr[][3],int r,int c)
{
    for(int i=0;i<r;i++)
    {

        for(int j=0;j<c;j++)
        {

            cout<<arr[i][j]<<" ";

        }
        cout<<endl;

    }


}


void bin_example(){

    int pixels[3][3];

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            pixels[i][j]=1+i*j;

        }

    }
    display(pixels,3,3);


ofstream fout("data.bin",ios::binary);
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++)
        {
            fout.write((char*)&pixels[i][j],sizeof(int));
        }

    }

cout<<"reseting an array"<<endl;
for(int i=0;i<3;i++)
{
    for(int j=0;j<3;j++)
    {

            pixels[i][j]=0;

    }
}
display(pixels,3,3);
cout<<endl;


    cout<< "reading from the file"<<endl;

    ifstream fin("data.bin",ios::binary);
    if(fin.fail())
    {
        cout<<"failed to read file ";
    }

    else{

        for(int i=0;i<3;i++)
        {

            for(int j=0;j<3;j++)
            {

                fin.read((char *)&pixels[i][j],  sizeof(int));

            }

        }


    }
    fin.close();

    display(pixels,3,3);

}


int main()
{

bin_example();



}
