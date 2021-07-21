#include <iostream>
using namespace std;
int func()
{char a[30];
int digits=0,alphabet=0,special=0;
cout<<"Enter the string: ";
cin>>a;
for(int i=0;a[i]!='\0';i++)
{
    if((a[i]=='!') ||  (a[i]=='@') ||  (a[i]=='#') || (a[i]=='$') || (a[i]=='%') || (a[i]=='*') || (a[i]=='&'))
    special+=1   ;

    else if  ((a[i]=='1') ||  (a[i]=='2') ||  (a[i]=='3') || (a[i]=='4') || (a[i]=='5') || (a[i]=='6') || (a[i]=='7') || (a[i]=='8') || (a[i]=='9') || (a[i]=='0'))
    digits+=1;

    else
    alphabet+=1;
}
    cout<<"Specials = "<<special<<endl<<"Digits = "<<digits<<endl<<"Alphabet = "<<alphabet;
}
int main()
{
    func();
}
