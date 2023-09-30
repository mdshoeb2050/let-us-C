#include<iostream>
using namespace std;
int main(){
    int n,origi_v,rev=0,k;
    cout<<"Enter a Number:"<<endl;
    cin>>n;
    origi_v=n; // storing original no into a fresh var 
    while(n>0){
        k=n%10;
        n=n/10;
        rev=rev*10+k;
    }
    if(origi_v==rev)
    {
        cout<<"Original and Reversed numbers are Equal."<<endl;
    }
    else{
        cout<<"Original and Reversed numbers are NOT Equal."<<endl;
    }
    return 0;
}
/*
Enter a Number:
121
Original and Reversed numbers are Equal.

Enter a Number:
12345
Original and Reversed numbers are NOT Equal.
*/