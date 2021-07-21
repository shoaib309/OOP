#include<iostream>
using namespace std;
class product
{
public:
product()
{
cout<<"SELECT THE PRODUCT " << endl;
}
};

class Books:public product{
private:
    string nameOfBook, writerOfBook;
public:

    void getdata()
    {
    cout << "Please Enter the Name of BOOK & BOOK WRITER: " << endl;
    cin >> nameOfBook >> writerOfBook ;
    }
    void setdata()
    {
    cout << "BOOK NAME : " << nameOfBook << " BOOK WRITER : "<< writerOfBook;
    }
    };
    class Electronics: public product{
    private:
    string things;
    public:
    void display(){
    cout<<"WE HAVE DIFFERENT ELECTRONIC GADGETS CHECK THEM: " << endl;
    }
};
    class Television:public Electronics{
    private:
    int sizeOfTv;
    int priceOfTv;
    int discountOfTv;
    public:
    void getdata(){
    cout << "Enter a SIZE, PRICE, & DISCOUNT of TV:" << endl;
    cin >> sizeOfTv >> priceOfTv >> discountOfTv;
    }
    void setdata()
    {
    cout<<"Size of the television = "<< sizeOfTv<<endl;
    cout << "Price of the television = " << priceOfTv<<endl;;
    cout << "it's a discount from our side ENJOY!!!!!!!! = "<< discountOfTv<<endl;
    }
    };
    class MP3: public Electronics{
    private:
        string color;
        long gigaByte;
        public:
        void getdata(){
        cout << "Enter the color and the Giga bytes: " << endl;
        cin >> color >> gigaByte ;
        }
    void setdata()
        {

        cout << "Color = " << color <<endl;
        cout<< "Giga bytes: " << gigaByte <<endl;

        }
};


int main()
{
    MP3 *m;
    m = new MP3;
    m->getdata();
    m->setdata();


    Books *b;
    b = new Books;
    b->getdata();
    b->setdata();

    Television *t;
    t = new Television;
    t->getdata();
    t->setdata();
    return 0;
}
