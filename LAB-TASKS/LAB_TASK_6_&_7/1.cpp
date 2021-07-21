#include<iostream>
using namespace std;
class Account{
private:
    int accountNumber;
    double balance=0.0;
public:
        Account(int accountNumber,double balance )
        {


        this->accountNumber = accountNumber;
        this->balance = balance;

        }


        int getaccountNumber()
        {

        cout << "ENTER ACCOUNT NUMBER !!!!!!!!!\n";
        cin >> accountNumber;
        return accountNumber;
        }

int getbalance()
{
cout << "ENTER YOUR BALANCE!!!!!!!!!!!!!!! \n";
cin>>balance;
return balance;
}

void setbalance(){
balance=balance;
}

void credit(double amount)
{
    if (this-> balance>=amount)
    balance = balance + amount;
    else if(this->balance<=amount)
    balance=balance-amount;
}
    void debit(double amount)
    {
    if (amount>=balance)
    cout<<"INSUFFICENT BALANCE!!!!!!!!!!!";
    }
void print()
{
     cout<<"ACCOUNT NUMBER: "<<accountNumber<<" Balance: "<<balance;
}

};
int main()
{
    Account AC(0,0);
    AC.getbalance();
    AC.getaccountNumber();
    AC.credit(898464);
    AC.setbalance();
    AC.print();
    AC.debit(898464);
    return 0;
}
