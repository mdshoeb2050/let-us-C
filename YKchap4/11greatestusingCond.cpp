#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter 3 Numbers:"<<endl;
    cin>>a>>b>>c;
    int k=a>b ? a>c?a:c : b>c?b:c;
    cout<<"Greatest is: "<<k<<endl;
    return 0;
}
/*
Enter 3 Numbers:
6
7
9
Greatest is: 9
*/