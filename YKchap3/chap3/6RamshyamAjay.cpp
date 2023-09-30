#include<iostream>
using namespace std;
int main(){
    int ram,shyam,ajay;
    cout<<"Enter the Ages of Ram Shyam And Ajay:"<<endl;
    cin>>ram>>shyam>>ajay;
    if(ram<=shyam && ram<=ajay){
        cout<<"Ram is Youngest:"<<ram<<endl;
    }else if(shyam<=ram && shyam<=ajay){
         cout<<"Shyam is Youngest:"<<shyam<<endl;
    }else{
         cout<<"Ajay is Youngest:"<<ajay<<endl;
    }
    return 0;
}  
/*
Enter the Ages of Ram Shyam And Ajay:
80
55
22
Ajay is Youngest:22
*/