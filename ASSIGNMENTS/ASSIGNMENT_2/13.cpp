#include <iostream>
using namespace std;
    int c = 0,classMarks=0,classavg;

    string name[10];
    int score[10][5];
    char grade[10];
    int studentAvgarray [10];

int storeData()
{
    for(int i=0; i<10;i++)
    {
    cout<<"Enter the name of the student "<<i+1<<": ";
    cin>>name[i];

    for(int j=0;j<5;j++)
    {
        cout<<"Enter the "<<name[i]<<" marks: ";
        cin>>score[i][j];


    }
        cout<<endl;
    }

}
int avgScoreAndGrades()
{
    int avg;
    for(int i=0;i<10;i++)

    {
        int scounter = 0;
        int studentmarks = 0;
        int studentavg = 0;
        int totalMarks=0,counter=0;;
        for(int j=0;j<5;j++)
        {
            totalMarks+=score[i][j];
            counter+=1;
            classMarks+= score[i][j];
            c+=1;
            studentmarks+=score[i][j];
            scounter+=1;
        }
        studentavg=studentmarks/scounter;
        studentAvgarray[i] = studentavg;

        cout<<endl;
        avg = totalMarks/counter;
        classavg = classMarks/c;
        if(avg<50)
        grade[i]='F';

        else if ((avg>=50) && (avg<70))
        grade[i]='D';

        else if ((avg>=70) && (avg<80))
        grade[i] = 'C' ;

        else if ((avg>=80) && (avg<90))
        grade[i] = 'B' ;

        else if ((avg>=90) && (avg<=100))
        grade[i] = 'A' ;
    }

}

int result()
{   cout<<"Class Average is "<<classavg<<endl<<endl;
    for(int i=0;i<10;i++)
    {   cout<<name[i]<<" ";
        for(int j=0;j<5;j++)
        {
            cout<<score[i][j]<<" ";

        }
        cout<<"avg:"<<studentAvgarray[i]<<" ";
        cout<<"Grade: "<<grade[i]<<endl;
    }


    }

int main()
{
    storeData();
    avgScoreAndGrades();
    result();

}




