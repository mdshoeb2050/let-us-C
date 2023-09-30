#include<iostream>
using namespace std;
int main(){
    int yr;
    cout<<"Enter a Year:"<<endl;
    cin>>yr;
     if(yr%400==0 || yr%100!=0 && yr%4==0){
         cout<<"Leap Year."<<endl;
     }
     else{
         cout<<"Not A Leap Year."<<endl;
     }
     return 0;
}