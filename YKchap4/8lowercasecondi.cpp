#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter A character:"<<endl;
    cin>>ch;
    //here we use conditional statement
    (ch>=97 && ch<=122) ? cout<<"Lowercase alphabet." : cout<<" Not Lowercase alphabet.";
    cout<<endl;
    return 0;
}

