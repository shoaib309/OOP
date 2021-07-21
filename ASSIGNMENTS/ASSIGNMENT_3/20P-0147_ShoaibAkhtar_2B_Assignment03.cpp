#include<iostream>
using namespace std;
class address 
{
	public:
		int house_no;
		int street_no;
		string city_name;
	    string  country_name;
	   string get_full_address()
	    {
	       cout<<house_no;
	       cout<<street_no;
	       cout<<city_name;
	       cout<<country_name;
	    	 
		}
};
  
class Employee :public address
 {
	private:
int current_address_house_no ;
int current_address_street ;
string current_address_city ;
string current_address_country ;
int permanent_address_house_no ;
int permanent_address_street ;
string permanent_address_city ;
string permanent_address_country ;
   public:
   void set_current_address(int house_no, int street, string city, string country)
   {
   	  current_address_house_no=house_no;
      current_address_street=street;
      current_address_city =city;
      current_address_country=country;
   }
   void set_permanent_address(int house_no, int street, string city, string country)
    {
        permanent_address_house_no=house_no ;
        permanent_address_street=street ;
		permanent_address_city=city;
		permanent_address_country=country;	
	}
   void print_addresses()
      {
      	
   	  cout<<current_address_house_no;
      cout<<current_address_street;
      cout<<current_address_city ;
      cout<<current_address_country;
      	
      	
        cout<<permanent_address_house_no;
        cout<<permanent_address_street ;
		cout<<permanent_address_city;
		cout<<permanent_address_country;
      	
      	
	  }
};
class wheels
{
	private:
		string c;
  public:
	void set_wheel_state(string s)
	{
	  c=s;	
	}
	string get_wheel_state()
	{
		
		return c;
	}
};
class car:public wheels
{
	private:
	int ary_whel[4];
	public:
		void set_car_to_moving()
		{
			cout<<"turning";
		}
		void set_car_to_stopped()
		{
			cout<<"stopped";
		}
	   void  print_car_wheels_state()
	   {
	   	 cout<<"turning";
	   }
};
int main()
{
	
}
