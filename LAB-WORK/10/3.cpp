#include<iostream>
using namespace std;
class Employee{
	public:
		Employee()
		{
		   cout<<"It's a parent constructor "<<endl;
		}
	~Employee()
	{
		cout<<"It's a parent destructor "<<endl;
	}
};
class teacher:public Employee{
	public:
		teacher()
		{
			cout<<"It's a child constructor "<<endl;
		}
		~teacher()
		{
			cout<<"It's is child destructor "<<endl;
		}
};
int main()
{
	Employee e;
    teacher t;
}
