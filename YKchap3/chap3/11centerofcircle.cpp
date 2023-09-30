#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int x,y,r,k,l;
    cout<<"Enter the co-ordinates and radius:"<<endl;
    cin>>x>>y>>r;
    k=x*x+y*y;
    l=r*r;
    if(k==l){
        cout<<"Point lies ON the circle."<<endl;
    }else if(k<l){
         cout<<"Point lies INSIDE the circle."<<endl;
    }else{
        cout<<"Point lies OUTSIDE the circle."<<endl;
    }
    return 0;
}
/*
Enter the co-ordinates and radius:
-9
4
10
Point lies INSIDE the circle.

Enter the co-ordinates and radius:
-6
8
10
Point lies ON the circle.

Enter the co-ordinates and radius:
5
9
10
Point lies OUTSIDE the circle.

Enter the co-ordinates and radius:
7
-7
10
Point lies INSIDE the circle.

*/