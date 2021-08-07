#include <iostream>
using namespace std;

class User
{
    static int next_id;

    /* "static" means it dont have any connection with instances...
    when instances are being created the members are also created with them
    but if we use "static" then it will not be created with instances..
    and it can't be be acessed with object if we want to acess it
    then the synatx is ----   "class" "::"  "variable or Fun"
    */

    public :
    int id;

    static int next_user_id()
    {

        next_id++;
        // if the fun and variable both are static then we don't have to write class infront of it...we can simply acess it.
        return next_id;

    }
    // creating a constructor....
    User ()
    {
        id = User :: next_user_id();
    }


int get_id()
{
    return id;

}

};

// And it is compulsory when the class ends we have to initallize the static variable...
int User :: next_id = 0;

int main()
{
    User u;
    cout<<"USer u id "<< u.get_id()<<endl;

   User v;
    cout<<"USer v id "<< v.get_id()<<endl;


    return 0;


}
