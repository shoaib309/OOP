#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    int score=0;
    int correct=0;
    int wrong=0;
    int c=0;
    fstream file;
    char correctAnswers[20];
    char studentAnswers[100];
    string id[2];
    file.open("a.txt",ios::in);

    if(!file) cout<<"File not Found"<<endl;

    else{
        char a;
        while(1)
        {
           file>>a;
           if(file.eof())
           break;

           else{
           correctAnswers[c]=a;
           c++;
           }

        }

    }


 fstream file2;
    file2.open("s.txt",ios::in);
    if(!file2) cout<<"No such file found"<<endl;

    else{
        char b;
        int k=0;
        while(1)
        {   file2>>b;

            if(file2.eof())
              {  break;
              }
            else{
                if ((b=='T') || (b=='F'))
                {
                            studentAnswers[k]=b;
                            k++;

                }
                }


              }



}
    for(int i=0; i<20;i++)
    {

    if(correctAnswers[i]==studentAnswers[i])
    {
        score+=2;
        correct+=1;
    }
    else
    {
            wrong+=1;
            score-=1;
    }

    }
cout<<"Correct = "<<correct<<endl
    <<"Wrong = "<<wrong<<endl
    <<"Score = "<<score<<endl;

    if ((score>=30) && (score<=40))
    cout<<"Grade  = A+";

    else if ((score>=25) && (score<=30))
    cout<<"Grade = A";

    else if ((score>=20) && (score<=25))
    cout<<"Grade = B";

    else if ((score>=15) && (score<=10))
    cout<<"Grade = C";


    else{
    cout<<"Sorry Better luck next time you are FAIL";
    }
}

