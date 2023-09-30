#include<iostream>
#include<cmath>
using namespace std;
int main (){
    float x,y,r,th;
    cout<<"Enter value of x and y: "<< endl;
    cin>>x>>y;
    r=sqrt(x*x+y*y);
    th=atan2(y,x); //tan ke inverse ko atan2 likha hai.
    th=th*180/3.14;
    cout<<"Polar co-ordinates (in degree) are: "<<r<<" and "<<th<<endl;
    return 0;
}