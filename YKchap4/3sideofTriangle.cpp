#include<iostream>
using namespace std;
int main(){
    int s1,s2,s3,sum,large_side;
    cout<<"Enter three sides of Triangle."<<endl;
    cin>>s1>>s2>>s3;
    if(s1>s2){
        if(s1>s3)
        {
            sum=s2+s3;
            large_side=s1;
        }
        else
        {
          sum=s1+s2;
          large_side=s3;
        }
    }
   else
   {
     if(s2>s3)
     {
       sum=s3+s1;
       large_side=s2;
     }
     else
     {
        sum=s1+s2;
        large_side=s3;
     }
   }
   if(sum>large_side)
   {
       cout<<"Valid Triangle."<<endl;
   }
   else
     cout<<"Invalid Triangle"<<endl;

     return 0;
}

/*
Enter three sides of Triangle.
3
4
5
Valid Triangle.

Enter three sides of Triangle.
5
8
2
Invalid Triangle

*/