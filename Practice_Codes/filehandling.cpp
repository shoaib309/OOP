#include <iostream>
#include <fstream>
using namespace std;
int main(){

ofstream fout;

fout.open("sample.txt");

fout<<"shoaib is a good boy"<<endl;

fout.close();

ifstream fin;

fin.open("sample.txt");
{
    string line;

    while(fin){

    getline(fin,line);
    cout<<line<<endl;

    }
    fout.close();

}



}
