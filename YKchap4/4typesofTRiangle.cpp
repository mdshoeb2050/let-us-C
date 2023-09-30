#include<iostream>
using namespace std;
int main(){
    int s1,s2,s3,a,b,c;
    cout<<"Enter three sides of Triangle."<<endl;
    cin>>s1>>s2>>s3;
    if((s1==s2 && s2!=s3) || (s2==s3 && s3!=s1) ||(s3==s1 && s1!=s2))
    {
       cout<<"Isosceles Triangle"<<endl;
    }
    if(s1==s2 && s2==s3)
    {
       cout<<"Equilateral Triangle"<<endl;
    }
    if(s1!=s2 && s2!=s3 && s3!=s1)
    {
       cout<<"Scalene Triangle"<<endl;
    }
     a=(s1*s1)==(s2*s2)+(s3*s3);
     b=(s2*s2)==(s1*s1)+(s3*s3);
     c=(s3*s3)==(s1*s1)+(s2*s2);

    if(a||b||c){
         cout<<"Right Angle Triangle"<<endl;
    }
    return 0;
 }

 /*
Enter three sides of Triangle.
3
4
5
Scalene Triangle
Right Angle Triangle

Enter three sides of Triangle.
6
9
9
Isosceles Triangle

Enter three sides of Triangle.
8
8
8
Equilateral Triangle
*/