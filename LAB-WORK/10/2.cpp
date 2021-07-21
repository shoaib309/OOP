#include <iostream>
using namespace std;
class Electronic
{
    int x;
    public:
        friend void Myfriend(Electronic);



};
void MyFriend (Electronic)
{

    cout<<" "<<obj.x;



}
int main()
{

    Electronic obj;
    MyFriend(obj);
    return 0;


}
