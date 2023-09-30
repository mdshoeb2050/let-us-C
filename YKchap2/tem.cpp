#include<iostream>
using namespace std;
int main(){
 int n,a,k,sum=0;
 cout<<"Enter a number: "<<endl;
 cin>>n;
  while(n!=0)
  {
    k=n%10;
    n=n/10;
    sum=sum+k;
  }
cout<<"sum of digits:"<<sum<<endl;
return 0;
}