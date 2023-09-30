#include<iostream>
#include<cmath>
using namespace std;
int main(){
 float a,b,c ,s,area;
 cout<<"Enter 3 sides of triangle: "<<endl;
 cin>>a>>b>>c;
 s=(a+b+c)/2;  // Ek chhota sa bug is line me paya gaya tha
 area = sqrt(s*(s-a)*(s-b)*(s-c));
 cout<<"Area of Triangle is: "<<area<<endl;
 return 0;
}