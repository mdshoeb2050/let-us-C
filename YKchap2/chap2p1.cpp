#include<iostream>
using namespace std;
int main(){
 int n,k,sum=0;
 cout<<"Enter a number:"<<endl;
 cin>>n;
 k=n%10;  // 5 digits
 n=n/10;
 sum=sum+k;

 k=n%10;  // 4 digits
 n=n/10;
 sum=sum+k;

 k=n%10;  // 3 digits
 n=n/10;
 sum=sum+k;

 k=n%10;  // 2 digits
 n=n/10;
 sum=sum+k;

 k=n%10;  // 1 digits
 n=n/10;
 sum=sum+k;

cout<<"Sum of digits is:  "<<sum<<endl;
return 0;


}