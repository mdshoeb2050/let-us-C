#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int x,y;
    cout<<"Enter the co-ordinates and radius:"<<endl;
    cin>>x>>y;
    if(x==0 && y==0){
        cout<<"Point lies on the Origin."<<endl;
    }else if(x==0 && y>0){
        cout<<"Point lies on the Y-Axis."<<endl;
    }else if(x>0 && y==0){
          cout<<"Point lies on the X-Axis."<<endl;
    }else if(x>0 && y>0){
          cout<<"Point lies Between the Positive Area of X-Axis and Y-Axis.  "<<endl;
    }else {
          cout<<"Point lies Between the Negative Area of X-Axis and Y-Axis.  "<<endl;
    }
    return 0;
}

