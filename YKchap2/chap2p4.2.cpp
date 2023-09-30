#include<iostream>
#include<cmath>
using namespace std;
int main (){
    float x,y,r,theta;
    cout<<"Enter value of x and y: "<< endl;
    cin>>x>>y;
    r=sqrt(x*x+y*y);
    theta=atan2(y,x); //tan ke inverse ko atan2 likha hai.
    theta=theta*3.14/180;
    cout<<"Polar co-ordinates (in degree) are: "<<r<<" and "<<theta<<endl;
    return 0;
}