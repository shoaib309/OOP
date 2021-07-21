#include<iostream>
using namespace std;
int countVowelConsonant( )
{
int vowel=0,consonant=0;
char a[30];
cout<<"Enter the string: ";
cin>>a;
for(int i=0;a[i]!='\0';i++)
{
    if((a[i]=='a') || (a[i]=='e') || (a[i]=='i') || (a[i]=='o') || (a[i]=='u') || (a[i]=='A') || (a[i]=='E') || (a[i]=='I') ||(a[i]=='O') ||(a[i]=='U'))
        vowel++;
    else
        consonant++;
}
cout<<"Vowels = "<<vowel<<endl<<"Consonant = "<<consonant;
}
int main()
{
  countVowelConsonant();
}
