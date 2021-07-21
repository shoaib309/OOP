#include <iostream>
using namespace std;
int main()
{
string a,b,c;
string fName[6]  = {"shoaib","hassan","waqar","kashif","gul","mohsin"};
string lName[6]  = {"akhtar","aliii","ahmed","alii","muneer","ali"};
int age[6]       = {10,11,12,13,14,15};
int id[6]        = {0,1,2,3,4,5};
string fsport[6] = {"cricket","pubg","volleyball","racing","hockey","cycling"};
string fFood[6] = {"briyani","fastFood","chicken","sharvma","fish","mutton"};
float  gpa[6]    = {2.92,2.94,3.1,3.5,2.7,3.8};
while(true)
{
cout<<"Press '1' for search by first Name\nPress '2' for search by last Name\nPress '3' for search by Age\nPress '4' for search by Id\nPress '5' for search by Favourate Sport\nPress '6' for search by Favourate Food\nPress '7' for search by GPA "<<endl;
cin>>a;
if(a=="1")
{
    cout<<"Enter the first name: ";
    cin>>b;
    if(b=="shoaib")
{
    cout<<"First Name: "<<fName[0]<<endl;
    cout<<"Last Name: "<<lName[0]<<endl;
    cout<<"Age: "<<age[0]<<endl;
    cout<<"ID No: "<<id[0]<<endl;
    cout<<"Favourate Sport: "<<fsport[0]<<endl;
    cout<<"Favourate Food: "<<fFood[0]<<endl;
    cout<<"GPA: "<<gpa[0]<<endl<<endl;
}
    else if(b=="hassan")
{
        cout<<"First Name: "<<fName[1]<<endl;
        cout<<"Last Name: "<<lName[1]<<endl;
        cout<<"Age: "<<age[1]<<endl;
        cout<<"ID No: "<<id[1]<<endl;
        cout<<"Favourate Sport: "<<fsport[1]<<endl;
        cout<<"Favourate Food: "<<fFood[1]<<endl;
        cout<<"GPA: "<<gpa[1]<<endl<<endl;
}
    else if(b=="waqar")
{
        cout<<"First Name: "<<fName[2]<<endl;
        cout<<"Last Name: "<<lName[2]<<endl;
        cout<<"Age: "<<age[2]<<endl;
        cout<<"ID No: "<<id[2]<<endl;
        cout<<"Favourate Sport: "<<fsport[2]<<endl;
        cout<<"Favourate Food: "<<fFood[2]<<endl;
        cout<<"GPA: "<<gpa[2]<<endl<<endl;
}
    else if(b=="kashif")
{
        cout<<"First Name: "<<fName[3]<<endl;
        cout<<"Last Name: "<<lName[3]<<endl;
        cout<<"Age: "<<age[3]<<endl;
        cout<<"ID No: "<<id[3]<<endl;
        cout<<"Favourate Sport: "<<fsport[3]<<endl;
        cout<<"Favourate Food: "<<fFood[3]<<endl;
        cout<<"GPA: "<<gpa[3]<<endl<<endl;
}
    else if(b=="gul")
{
        cout<<"First Name: "<<fName[4]<<endl;
        cout<<"Last Name: "<<lName[4]<<endl;
        cout<<"Age: "<<age[4]<<endl;
        cout<<"ID No: "<<id[4]<<endl;
        cout<<"Favourate Sport: "<<fsport[4]<<endl;
        cout<<"Favourate Food: "<<fFood[4]<<endl;
        cout<<"GPA: "<<gpa[4]<<endl<<endl;
}   else if(b=="mohsin")
{
        cout<<"First Name: "<<fName[5]<<endl;
        cout<<"Last Name: "<<lName[5]<<endl;
        cout<<"Age: "<<age[5]<<endl;
        cout<<"ID No: "<<id[5]<<endl;
        cout<<"Favourate Sport: "<<fsport[5]<<endl;
        cout<<"Favourate Food: "<<fFood[5]<<endl;
        cout<<"GPA: "<<gpa[5]<<endl<<endl;
}

    else
        cout<<"Wrong first name enter the first name correctly"<<endl<<endl;
    cout<<"Do you want to  continue (y/n)";
    cin>>c;
    if(c=="n")
 {
    break;
 }
}
else if(a=="2")
{
    cout<<"Enter the last name: ";
    cin>>b;
    if(b=="akhtar")
{
        cout<<"First Name: "<<fName[0]<<endl;
        cout<<"Last Name: "<<lName[0]<<endl;
        cout<<"Age: "<<age[0]<<endl;
        cout<<"ID No: "<<id[0]<<endl;
        cout<<"Favourate Sport: "<<fsport[0]<<endl;
        cout<<"Favourate Food: "<<fFood[0]<<endl;
        cout<<"GPA: "<<gpa[0]<<endl<<endl;
}
    else if(b=="aliii")
{
        cout<<"First Name: "<<fName[1]<<endl;
        cout<<"Last Name: "<<lName[1]<<endl;
        cout<<"Age: "<<age[1]<<endl;
        cout<<"ID No: "<<id[1]<<endl;
        cout<<"Favourate Sport: "<<fsport[1]<<endl;
        cout<<"Favourate Food: "<<fFood[1]<<endl;
        cout<<"GPA: "<<gpa[1]<<endl<<endl;
}
    else if(b=="ahmed")
{
        cout<<"First Name: "<<fName[2]<<endl;
        cout<<"Last Name: "<<lName[2]<<endl;
        cout<<"Age: "<<age[2]<<endl;
        cout<<"ID No: "<<id[2]<<endl;
        cout<<"Favourate Sport: "<<fsport[2]<<endl;
        cout<<"Favourate Food: "<<fFood[2]<<endl;
        cout<<"GPA: "<<gpa[2]<<endl<<endl;
}   else if(b=="alii")
{
        cout<<"First Name: "<<fName[3]<<endl;
        cout<<"Last Name: "<<lName[3]<<endl;
        cout<<"Age: "<<age[3]<<endl;
        cout<<"ID No: "<<id[3]<<endl;
        cout<<"Favourate Sport: "<<fsport[3]<<endl;
        cout<<"Favourate Food: "<<fFood[3]<<endl;
        cout<<"GPA: "<<gpa[3]<<endl<<endl;
}
    else if(b=="muneer")
{
        cout<<"First Name: "<<fName[4]<<endl;
        cout<<"Last Name: "<<lName[4]<<endl;
        cout<<"Age: "<<age[4]<<endl;
        cout<<"ID No: "<<id[4]<<endl;
        cout<<"Favourate Sport: "<<fsport[4]<<endl;
        cout<<"Favourate Food: "<<fFood[4]<<endl;
        cout<<"GPA: "<<gpa[4]<<endl<<endl;
}
    else if(b=="ali")
{
        cout<<"First Name: "<<fName[5]<<endl;
        cout<<"Last Name: "<<lName[5]<<endl;
        cout<<"Age: "<<age[5]<<endl;
        cout<<"ID No: "<<id[5]<<endl;
        cout<<"Favourate Sport: "<<fsport[5]<<endl;
        cout<<"Favourate Food: "<<fFood[5]<<endl;
        cout<<"GPA: "<<gpa[5]<<endl<<endl;
}
    else
        cout<<"Wrong last name enter the first name correctly"<<endl;
    cout<<"Do you want to  continue (y/n)";
    cin>>c;
    if(c=="n")
 {
    break;
 }
}
else if(a=="3")
{
    cout<<"Enter the age: ";
    cin>>b;
    if(b=="10")
{
        cout<<"First Name: "<<fName[0]<<endl;
        cout<<"Last Name: "<<lName[0]<<endl;
        cout<<"Age: "<<age[0]<<endl;
        cout<<"ID No: "<<id[0]<<endl;
        cout<<"Favourate Sport: "<<fsport[0]<<endl;
        cout<<"Favourate Food: "<<fFood[0]<<endl;
        cout<<"GPA: "<<gpa[0]<<endl<<endl;
}
    else if(b=="11")
{
        cout<<"First Name: "<<fName[1]<<endl;
        cout<<"Last Name: "<<lName[1]<<endl;
        cout<<"Age: "<<age[1]<<endl;
        cout<<"ID No: "<<id[1]<<endl;
        cout<<"Favourate Sport: "<<fsport[1]<<endl;
        cout<<"Favourate Food: "<<fFood[1]<<endl;
        cout<<"GPA: "<<gpa[1]<<endl<<endl;
}
    else if(b=="12")
{
        cout<<"First Name: "<<fName[2]<<endl;
        cout<<"Last Name: "<<lName[2]<<endl;
        cout<<"Age: "<<age[2]<<endl;
        cout<<"ID No: "<<id[2]<<endl;
        cout<<"Favourate Sport: "<<fsport[2]<<endl;
        cout<<"Favourate Food: "<<fFood[2]<<endl;
        cout<<"GPA: "<<gpa[2]<<endl<<endl;
}
    else if(b=="13")
{
        cout<<"First Name: "<<fName[3]<<endl;
        cout<<"Last Name: "<<lName[3]<<endl;
        cout<<"Age: "<<age[3]<<endl;
        cout<<"ID No: "<<id[3]<<endl;
        cout<<"Favourate Sport: "<<fsport[3]<<endl;
        cout<<"Favourate Food: "<<fFood[3]<<endl;
        cout<<"GPA: "<<gpa[3]<<endl<<endl;
}
    else if(b=="14")
{
        cout<<"First Name: "<<fName[4]<<endl;
        cout<<"Last Name: "<<lName[4]<<endl;
        cout<<"Age: "<<age[4]<<endl;
        cout<<"ID No: "<<id[4]<<endl;
        cout<<"Favourate Sport: "<<fsport[4]<<endl;
        cout<<"Favourate Food: "<<fFood[4]<<endl;
        cout<<"GPA: "<<gpa[4]<<endl<<endl;
}
    else if(b=="15")
{
        cout<<"First Name: "<<fName[5]<<endl;
        cout<<"Last Name: "<<lName[5]<<endl;
        cout<<"Age: "<<age[5]<<endl;
        cout<<"ID No: "<<id[5]<<endl;
        cout<<"Favourate Sport: "<<fsport[5]<<endl;
        cout<<"Favourate Food: "<<fFood[5]<<endl;
        cout<<"GPA: "<<gpa[5]<<endl<<endl;
}
    else
        cout<<"Wrong age enter the age correctly"<<endl;
   cout<<"Do you want to  continue (y/n)";
   cin>>c;
   if(c=="n")
 {
    break;
 }
}
else if(a=="4")
{
    cout<<"Enter the id: ";
    cin>>b;
    if(b=="0")
{
        cout<<"First Name: "<<fName[0]<<endl;
        cout<<"Last Name: "<<lName[0]<<endl;
        cout<<"Age: "<<age[0]<<endl;
        cout<<"ID No: "<<id[0]<<endl;
        cout<<"Favourate Sport: "<<fsport[0]<<endl;
        cout<<"Favourate Food: "<<fFood[0]<<endl;
        cout<<"GPA: "<<gpa[0]<<endl<<endl;
}
    else if(b=="1")
{
        cout<<"First Name: "<<fName[1]<<endl;
        cout<<"Last Name: "<<lName[1]<<endl;
        cout<<"Age: "<<age[1]<<endl;
        cout<<"ID No: "<<id[1]<<endl;
        cout<<"Favourate Sport: "<<fsport[1]<<endl;
        cout<<"Favourate Food: "<<fFood[1]<<endl;
        cout<<"GPA: "<<gpa[1]<<endl<<endl;
}
    else if(b=="2")
{
        cout<<"First Name: "<<fName[2]<<endl;
        cout<<"Last Name: "<<lName[2]<<endl;
        cout<<"Age: "<<age[2]<<endl;
        cout<<"ID No: "<<id[2]<<endl;
        cout<<"Favourate Sport: "<<fsport[2]<<endl;
        cout<<"Favourate Food: "<<fFood[2]<<endl;
        cout<<"GPA: "<<gpa[2]<<endl<<endl;
}
    else if(b=="3")
{
        cout<<"First Name: "<<fName[3]<<endl;
        cout<<"Last Name: "<<lName[3]<<endl;
        cout<<"Age: "<<age[3]<<endl;
        cout<<"ID No: "<<id[3]<<endl;
        cout<<"Favourate Sport: "<<fsport[3]<<endl;
        cout<<"Favourate Food: "<<fFood[3]<<endl;
        cout<<"GPA: "<<gpa[3]<<endl<<endl;
}
    else if(b=="4")
{
        cout<<"First Name: "<<fName[4]<<endl;
        cout<<"Last Name: "<<lName[4]<<endl;
        cout<<"Age: "<<age[4]<<endl;
        cout<<"ID No: "<<id[4]<<endl;
        cout<<"Favourate Sport: "<<fsport[4]<<endl;
        cout<<"Favourate Food: "<<fFood[4]<<endl;
        cout<<"GPA: "<<gpa[4]<<endl<<endl;
}
    else if(b=="5")
{
        cout<<"First Name: "<<fName[5]<<endl;
        cout<<"Last Name: "<<lName[5]<<endl;
        cout<<"Age: "<<age[5]<<endl;
        cout<<"ID No: "<<id[5]<<endl;
        cout<<"Favourate Sport: "<<fsport[5]<<endl;
        cout<<"Favourate Food: "<<fFood[5]<<endl;
        cout<<"GPA: "<<gpa[5]<<endl<<endl;
}
    else
        cout<<"Wrong id enter the id correctly"<<endl;
    cout<<"Do you want to  continue (y/n) ";
    cin>>c;
 if(c=="n")
 {
    break;
 }
}
else if(a=="5")
{
    cout<<"Enter the favourate sport: ";
    cin>>b;
    if(b=="cricket")
{
        cout<<"First Name: "<<fName[0]<<endl;
        cout<<"Last Name: "<<lName[0]<<endl;
        cout<<"Age: "<<age[0]<<endl;
        cout<<"ID No: "<<id[0]<<endl;
        cout<<"Favourate Sport: "<<fsport[0]<<endl;
        cout<<"Favourate Food: "<<fFood[0]<<endl;
        cout<<"GPA: "<<gpa[0]<<endl<<endl;
}
    else if(b=="pubg")
{
        cout<<"First Name: "<<fName[1]<<endl;
        cout<<"Last Name: "<<lName[1]<<endl;
        cout<<"Age: "<<age[1]<<endl;
        cout<<"ID No: "<<id[1]<<endl;
        cout<<"Favourate Sport: "<<fsport[1]<<endl;
        cout<<"Favourate Food: "<<fFood[1]<<endl;
        cout<<"GPA: "<<gpa[1]<<endl<<endl;
}
    else if(b=="volleyball")
{
        cout<<"First Name: "<<fName[2]<<endl;
        cout<<"Last Name: "<<lName[2]<<endl;
        cout<<"Age: "<<age[2]<<endl;
        cout<<"ID No: "<<id[2]<<endl;
        cout<<"Favourate Sport: "<<fsport[2]<<endl;
        cout<<"Favourate Food: "<<fFood[2]<<endl;
        cout<<"GPA: "<<gpa[2]<<endl<<endl;
}
    else if(b=="racing")
{
        cout<<"First Name: "<<fName[3]<<endl;
        cout<<"Last Name: "<<lName[3]<<endl;
        cout<<"Age: "<<age[3]<<endl;
        cout<<"ID No: "<<id[3]<<endl;
        cout<<"Favourate Sport: "<<fsport[3]<<endl;
        cout<<"Favourate Food: "<<fFood[3]<<endl;
        cout<<"GPA: "<<gpa[3]<<endl<<endl;
}
    else if(b=="hockey")
{
        cout<<"First Name: "<<fName[4]<<endl;
        cout<<"Last Name: "<<lName[4]<<endl;
        cout<<"Age: "<<age[4]<<endl;
        cout<<"ID No: "<<id[4]<<endl;
        cout<<"Favourate Sport: "<<fsport[4]<<endl;
        cout<<"Favourate Food: "<<fFood[4]<<endl;
        cout<<"GPA: "<<gpa[4]<<endl<<endl;
}
    else if(b=="cycling")
{
        cout<<"First Name: "<<fName[5]<<endl;
        cout<<"Last Name: "<<lName[5]<<endl;
        cout<<"Age: "<<age[5]<<endl;
        cout<<"ID No: "<<id[5]<<endl;
        cout<<"Favourate Sport: "<<fsport[5]<<endl;
        cout<<"Favourate Food: "<<fFood[5]<<endl;
        cout<<"GPA: "<<gpa[5]<<endl<<endl;
}
    else
        cout<<"Wrong spot enter the sports correctly"<<endl;
    cout<<"Do you want to  continue (y/n)";
    cin>>c;
    if(c=="n")
 {
    break;
 }
}

else if(a=="6")
{
    cout<<"Enter the favorate  food: ";
    cin>>b;
    if(b=="briyani")
{
        cout<<"First Name: "<<fName[0]<<endl;
        cout<<"Last Name: "<<lName[0]<<endl;
        cout<<"Age: "<<age[0]<<endl;
        cout<<"ID No: "<<id[0]<<endl;
        cout<<"Favourate Sport: "<<fsport[0]<<endl;
        cout<<"Favourate Food: "<<fFood[0]<<endl;
        cout<<"GPA: "<<gpa[0]<<endl<<endl;
}
    else if(b=="fastFood")
{
        cout<<"First Name: "<<fName[1]<<endl;
        cout<<"Last Name: "<<lName[1]<<endl;
        cout<<"Age: "<<age[1]<<endl;
        cout<<"ID No: "<<id[1]<<endl;
        cout<<"Favourate Sport: "<<fsport[1]<<endl;
        cout<<"Favourate Food: "<<fFood[1]<<endl;
        cout<<"GPA: "<<gpa[1]<<endl<<endl;
}
    else if(b=="chicken")
{
        cout<<"First Name: "<<fName[2]<<endl;
        cout<<"Last Name: "<<lName[2]<<endl;
        cout<<"Age: "<<age[2]<<endl;
        cout<<"ID No: "<<id[2]<<endl;
        cout<<"Favourate Sport: "<<fsport[2]<<endl;
        cout<<"Favourate Food: "<<fFood[2]<<endl;
        cout<<"GPA: "<<gpa[2]<<endl<<endl;
}
    else if(b=="sharvma")
{
        cout<<"First Name: "<<fName[3]<<endl;
        cout<<"Last Name: "<<lName[3]<<endl;
        cout<<"Age: "<<age[3]<<endl;
        cout<<"ID No: "<<id[3]<<endl;
        cout<<"Favourate Sport: "<<fsport[3]<<endl;
        cout<<"Favourate Food: "<<fFood[3]<<endl;
        cout<<"GPA: "<<gpa[3]<<endl<<endl;
}
    else if(b=="fish")
{
        cout<<"First Name: "<<fName[4]<<endl;
        cout<<"Last Name: "<<lName[4]<<endl;
        cout<<"Age: "<<age[4]<<endl;
        cout<<"ID No: "<<id[4]<<endl;
        cout<<"Favourate Sport: "<<fsport[4]<<endl;
        cout<<"Favourate Food: "<<fFood[4]<<endl;
        cout<<"GPA: "<<gpa[4]<<endl<<endl;
}
    else if(b=="mutton")
{
        cout<<"First Name: "<<fName[5]<<endl;
        cout<<"Last Name: "<<lName[5]<<endl;
        cout<<"Age: "<<age[5]<<endl;
        cout<<"ID No: "<<id[5]<<endl;
        cout<<"Favourate Sport: "<<fsport[5]<<endl;
        cout<<"Favourate Food: "<<fFood[5]<<endl;
        cout<<"GPA: "<<gpa[5]<<endl<<endl;
}
    else
        cout<<"Wrong food  enter the food name correctly"<<endl;
    cout<<"Do you want to  continue (y/n)";
    cin>>c;
    if(c=="n")
 {
        break;
 }
}
else if(a=="7")
{
    cout<<"Enter GPA: ";
    cin>>b;
    if(b=="2.92")
{
        cout<<"First Name: "<<fName[0]<<endl;
        cout<<"Last Name: "<<lName[0]<<endl;
        cout<<"Age: "<<age[0]<<endl;
        cout<<"ID No: "<<id[0]<<endl;
        cout<<"Favourate Sport: "<<fsport[0]<<endl;
        cout<<"Favourate Food: "<<fFood[0]<<endl;
        cout<<"GPA: "<<gpa[0]<<endl<<endl;
}
    else if(b=="2.94")
{
        cout<<"First Name: "<<fName[1]<<endl;
        cout<<"Last Name: "<<lName[1]<<endl;
        cout<<"Age: "<<age[1]<<endl;
        cout<<"ID No: "<<id[1]<<endl;
        cout<<"Favourate Sport: "<<fsport[1]<<endl;
        cout<<"Favourate Food: "<<fFood[1]<<endl;
        cout<<"GPA: "<<gpa[1]<<endl<<endl;
}
    else if(b=="3.1")
{
        cout<<"First Name: "<<fName[2]<<endl;
        cout<<"Last Name: "<<lName[2]<<endl;
        cout<<"Age: "<<age[2]<<endl;
        cout<<"ID No: "<<id[2]<<endl;
        cout<<"Favourate Sport: "<<fsport[2]<<endl;
        cout<<"Favourate Food: "<<fFood[2]<<endl;
        cout<<"GPA: "<<gpa[2]<<endl<<endl;
}
    else if(b=="3.5")
{
        cout<<"First Name: "<<fName[3]<<endl;
        cout<<"Last Name: "<<lName[3]<<endl;
        cout<<"Age: "<<age[3]<<endl;
        cout<<"ID No: "<<id[3]<<endl;
        cout<<"Favourate Sport: "<<fsport[3]<<endl;
        cout<<"Favourate Food: "<<fFood[3]<<endl;
        cout<<"GPA: "<<gpa[3]<<endl<<endl;
}
    else if(b=="2.7")
{
        cout<<"First Name: "<<fName[4]<<endl;
        cout<<"Last Name: "<<lName[4]<<endl;
        cout<<"Age: "<<age[4]<<endl;
        cout<<"ID No: "<<id[4]<<endl;
        cout<<"Favourate Sport: "<<fsport[4]<<endl;
        cout<<"Favourate Food: "<<fFood[4]<<endl;
        cout<<"GPA: "<<gpa[4]<<endl<<endl;
}
    else if(b=="3.8")
{
        cout<<"First Name: "<<fName[5]<<endl;
        cout<<"Last Name: "<<lName[5]<<endl;
        cout<<"Age: "<<age[5]<<endl;
        cout<<"ID No: "<<id[5]<<endl;
        cout<<"Favourate Sport: "<<fsport[5]<<endl;
        cout<<"Favourate Food: "<<fFood[5]<<endl;
        cout<<"GPA: "<<gpa[5]<<endl<<endl;
}
    else
        cout<<"Wrong gpa  enter the gpa  correctly"<<endl;
    cout<<"Do you want to  continue (y/n) ";
    cin>>c;
    if(c=="n")
 {
        break;
 }
}
else
{
     cout<<"Wrong input "<<endl;
     cout<<"Do you want to  continue (y/n) ";
     cin>>c;
     if(c=="n")
 {
        break;
 }
}
}
}
