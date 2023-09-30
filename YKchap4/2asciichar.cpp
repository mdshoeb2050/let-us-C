#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter A character:"<<endl;
    cin>>ch;
    if(ch>=65 && ch<=90)
    {
        cout<<"Uppercase Letter."<<endl;
    }
    if(ch>=97 && ch<=122)
    {
        cout<<"Lowercase Letter."<<endl;

    }
    if(ch>=48 && ch<=57)
    {
        cout<<"Character is Digit."<<endl;
    }
    if((ch>=0 && ch<48) || (ch>=58 && ch<65) || (ch>=91 && ch<97) || (ch>122) )
    {
        cout<<"Special Symbol."<<endl;
    }
    return 0;
}