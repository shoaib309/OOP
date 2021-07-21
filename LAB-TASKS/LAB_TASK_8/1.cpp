#include <iostream>
using namespace std;

class Employee{

    public:
        int employee_number ;
        string employee_name;
        int employee_phone_number [4];
        int employee_age;
        float employee_compensesation;

    Employee()
    {
        employee_number = 0;
        employee_name  = "";
        employee_phone_number[4];
        employee_age  = 0;
        employee_compensesation = 0.0;


    }

    Employee(int a, string b,int c[4],int d, float e  )
    {
        employee_number = a;
        employee_name  = b;
            for(int i =0 ;i<4;i++)
            {
                employee_phone_number[i] = c[i];

            }
        employee_age  = d;
        employee_compensesation = e;

    }

   ~Employee()
   {
   cout<<"Deleted!!!"<<endl;
   }

    void set_employee_number(int a)
    {

        employee_number = a;

    }

    void set_employee_name(string b)
    {

        employee_name = b;

    }
    void set_employee_phone_number(int a[4])
    {

        for(int i = 0;i<4;i++)
        {
            employee_phone_number[i] = a[i];

        }

    }
    void set_employee_age(int c)
    {
        employee_age = c;


    }

    void set_employee_compensesation(float d)
    {

        employee_compensesation = d;

    }


    int get_employee_number()
    {

        return employee_number;

    }

    string get_employee_name()
    {

        return employee_name;

    }
    int * get_employee_phone_number()
    {
        return employee_phone_number;

    }
    int get_employee_age()
    {
        return employee_age ;

    }

    int get_employee_compensesation( )
    {

        return employee_compensesation;

    }

    void print_employee_number()
    {

        cout<<"Employee number "<<employee_number<<endl;
    }

     void print_employee_name()
    {

        cout<<"Employee name "<<employee_name<<endl;
    }

     void print_employee_phone_number()
    {
        cout<<"Employee phone number ";
        for(int i=0;i<4;i++)
        {
            cout<<employee_phone_number[i];

        }
        cout<<endl;
    }
    void print_employee_age()
    {

        cout<<"Employee age "<<employee_age<<endl;
    }

    void print_employee_compensesation()
    {

        cout<<"Employee compensesation "<<employee_compensesation<<endl;

    }



    void update_employee_number(int a)
    {

        employee_number = a;

    }

    void update_employee_name(string b)
    {

        employee_name = b;

    }
    void update_employee_phone_number(int a[4])
    {

        for(int i = 0;i<4;i++)
        {
            employee_phone_number[i] = a[i];

        }

    }
    void update_employee_age(int c)
    {
        employee_age = c;


    }

    void set_employee_compensesation(double d)
    {

        employee_compensesation = d;

    }



};

int main()
{

    Employee e1;

    cout<<"Enter the ist employe number ";
    cin>>e1.employee_number;


    cout<<"Enter the ist  employe name ";
    cin>>e1.employee_name;

    cout<<"Enter the ist enployee 4 digit phone number "<<endl;
    for(int i=0; i<4;i++)
    {
        cin>>e1.employee_phone_number[i];
    }


    cout<<"Enter the first employe age ";
    cin>>e1.employee_age;


    cout<<"Enter the first employe compensesation ";
    cin>>e1.employee_compensesation;

    cout<<endl;

    Employee e2;


    cout<<"Enter the 2nd employe number ";
    cin>>e2.employee_number;


    cout<<"Enter the 2nd employe name ";
    cin>>e2.employee_name;

    cout<<"Enter the 2nd employee 4 digit phone number "<<endl;
    for(int i=0; i<4;i++)
    {


        cin>>e2.employee_phone_number[i];
    }


    cout<<"Enter the 2nd employe age ";
    cin>>e2.employee_age;


    cout<<"Enter the 2nd employe compensesation ";
    cin>>e2.employee_compensesation;

    cout<<endl;


    Employee e3;
    cout<<"Enter the 3rd employe number ";
    cin>>e3.employee_number;


    cout<<"Enter the 3rd employe name ";
    cin>>e3.employee_name;

    cout<<"Enter the 3rd employee 4 digit phone number "<<endl;
    for(int i=0; i<4;i++)
    {

        cin>>e3.employee_phone_number[i];
    }


    cout<<"Enter the employe age ";
    cin>>e3.employee_age;


    cout<<"Enter the employe compensesation ";
    cin>>e3.employee_compensesation;

    cout<<endl;

    e1.print_employee_number();
    e1.print_employee_name();
    e1.print_employee_phone_number();
    e1.print_employee_age();
    e1.print_employee_compensesation();

    cout<<endl;

    e2.print_employee_number();
    e2.print_employee_name();
    e2.print_employee_phone_number();
    e2.print_employee_age();
    e2.print_employee_compensesation();

    cout<<endl;

    e3.print_employee_number();
    e3.print_employee_name();
    e3.print_employee_phone_number();
    e3.print_employee_age();
    e3.print_employee_compensesation();
}
