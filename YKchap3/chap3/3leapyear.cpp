#include<iostream>
using namespace std;
int main(){
    int yr;
    cout<<"Enter a Year:"<<endl;
    cin>>yr;
     if(yr%400==0){    //ya to 400 se divisible ho 
         cout<<"Leap Year."<<endl;
     }else if(yr%4==0 && yr%100!=0){ // ya phir 4 se hai to 100 se nahi hona chahiye 
         cout<<"Leap Year."<<endl;
     }else{
        cout<<"Not A Leap Year."<<endl;
     }
     return 0;
}