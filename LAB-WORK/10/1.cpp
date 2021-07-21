#include <iostream>
using namespace std;
class Electronic
{
    int EMI1 = 32323;
    int EMI2 = 32323;
    int EMI3 = 32323;
    int EMI4 = 32323;
    int EMI5 = 32323;
    int EMI6 = 32323;
    int EMI7 = 32323;
    int EMI8 = 32323;

    public :
    friend void MyFriend(Electronic obj);

    int getEMI()
    {
        return EMI1;


    }
    void setEMI(int EMI1)
    {

    this->EMI1=EMI1;

    }

};


void Myfriend(Electronic  obj)
{

    cout<<"EMI1: "<<obj.EMI1<<endl;
    cout<<"EMI2: "<<obj.EMI2<<endl;
    cout<<"EMI3: "<<obj.EMI3<<endl;
    cout<<"EMI4: "<<obj.EMI4<<endl;
    cout<<"EMI5: "<<obj.EMI5<<endl;
    cout<<"EMI6: "<<obj.EMI6<<endl;




}

int main()
{

    Electronic obj;
    Myfriend(obj);


}
