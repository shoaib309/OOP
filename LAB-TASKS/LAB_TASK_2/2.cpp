# include <iostream>
using namespace std;
int main(){
int i=0,sum;
do{
    i++;
    if(i%2==0){
    sum +=i;
}
}while(i<100);
cout<<sum;
}
}

// with the while loop only

# include<iostream>
using namespace std;
int main()
{ int i=0,sum;
while(i<100){
    i++;
    if (i%2!=0){
    sum += i;
}
}
cout<<sum;

return 0;
}
