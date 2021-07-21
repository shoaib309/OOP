#include<iostream>
using namespace std;
class Father{
    public:
        Father(){
            cout<<"I am father !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!"<<endl;
        }
        ~Father(){
            cout<<"I am father and  i'm gonna will die !!!!!!!!!!!!!!!!!!!!!!"<<endl;
        }

        };

class Mother{
    public:
        Mother(){
            cout<<"I am mother !!!!!!!!!!!!!!!!!!!!!) "<<endl;
        }
        ~Mother(){
            cout<<"I am mother !!!!!!!!!!!!!!!!!!!!!"<<endl;
        }

};

class Child:public Father,Mother{
    public:
        Child()
        {


            cout<<"I am child "<<endl;
        }
        ~Child()
        {



        cout<<"I am child"<<endl;}

        };

int main()
{
    Child b;

}
