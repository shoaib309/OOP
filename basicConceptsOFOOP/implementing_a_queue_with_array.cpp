#include <iostream>
using namespace std;
#define SIZE 5
class Queue
{
    private:
    int q[SIZE];
    int in, out;
    bool is_empty, is_full;

    int inc(int val);

    public:
    Queue();
    void enqueue(int val);
    int dequeue();

    void print_queue();

};
// constructor to initallize the
Queue::Queue()
{

    for (int i=0; i<SIZE; i++)
    {
        q[i]=0;
        is_empty = true;
        is_full = false;
    }

}

int Queue::inc(int val)
{

    if(val+1==SIZE)
        val = 0;
    // now we have to move the val with circularly means when it reaches to the max then it will return to the 0

    else
        val +=1;

    return val;

}
void Queue:: enqueue(int val)
{
    if(is_full)
    {

        cout <<"Nahi Kerta! ";
        return ;

    }
    q[in] = val;
    in = inc(in);

    // check if we are full
    if (in == out)
        is_full = true;

    is_empty = false;
}
int Queue::dequeue()
{

    if(is_empty)
    {
        cout<<"Queue Empty"<<endl;
    }

    int ret = q[out];
    out  = inc(out);

    // see if we are empty

    if(in==out)
    is_empty = true;

    // definitely not full any more.
    is_full = false;

    return ret;

}


