
#include <iostream>
using namespace std;
int lower_case_or_vowel()
{
    char a;
    cout<<"Enter a character: ";
    cin>>a;
    if(a>=65 && a<=90)
        cout<<"It's a upper case ";
    else cout<<"Its a lower case";
}
int main()
{
    lower_case_or_vowel();
}
