#include <iostream>
using namespace std;
int count_vowel_and_consonant(string a)
{   int vowels = 0;
    int consonant = 0;
    for(int i=0; i<a.length();i++)
    {
        if((a[i]=='a') || (a[i]=='e') || (a[i]=='i') ||  (a[i]=='o') || (a[i]=='u') || (a[i]=='A') || (a[i]=='E') || (a[i]=='I') || (a[i]=='O') || (a[i]=='U') )
           {
            vowels +=1;
            }
    else
    {
    consonant  +=1;
    }
    }
    cout<<"Vowels = "<<vowels<<endl;
    cout<<"Consonats = "<<consonant;
}
int main()
{
    count_vowel_and_consonant("shoaib");
}
