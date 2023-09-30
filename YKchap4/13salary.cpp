#include<iostream>
using namespace std;
int main(){

float sal;
cout<<"Enter Salary:"<<endl;
cin>>sal;
(sal>=25000 && sal<=40000) ? cout<<"Apun Manager hai." : (sal>=15000 && sal<25000) ? cout<<"Apun Accountant hai." : cout<<"Apun Clerk hai.";
cout<<endl;
return 0;

}

/*
Enter Salary:
5000
Apun Clerk hai.
*/