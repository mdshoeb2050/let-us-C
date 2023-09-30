#include<iostream>
using namespace std;
int main(){
    int yr;
    cout<<"Enter a Year:"<<endl;
    cin>>yr;
    (yr%400==0 ) ? cout<<"Leap Year."  : (yr%100!=0 && yr%4==0) ? cout<<"Leap Year." : cout<<"Not ALeap Year."  ;
    cout<<endl;
     return 0;
}