#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter A character:"<<endl;
    cin>>ch;
    ((ch>=0 && ch<48) || (ch>=58 && ch<65) || (ch>=91 && ch<97) || (ch>122) )  ? cout<<"Special Symbol." : cout<<"Not ASpecial Symbol.";
    cout<<endl;
    return 0;
}