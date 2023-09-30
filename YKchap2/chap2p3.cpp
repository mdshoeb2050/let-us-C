#include<iostream>
using namespace std;
int main(){
 int n,a,k,rev=0;
 cout<<"Enter a number: "<<endl;
 cin>>n;
  while(n!=0)
  {
    k=n%10; //extracting last digit
    n=n/10; //Reducing the number to small size
    rev=rev*10+k;
  }
cout<<"Reverse of digits:"<<rev<<endl;
return 0;
}