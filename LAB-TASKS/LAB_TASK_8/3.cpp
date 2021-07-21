#include<iostream>
using namespace std;
class Parent{
    public:
        Parent(){
            cout<<"I am parent!!!!!!!!!!!!!!!!!!!!!!!!!!!"<<endl;
        }
        ~Parent(){
            cout<<"I am parent & I will die!!!!!!!!!!!!!!!!!!! "<<endl;}};

class Child:public Parent
{
    public:
        Child(){
            cout<<"I am child !!!!!!!!!!!!!!!!!!!!!!!"<<endl;}
            ~Child(){
            cout<<"I am child and  I will die!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!1"<<endl;}};

int main(){
    Child a1;
