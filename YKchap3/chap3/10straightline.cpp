#include<iostream>
using namespace std;
int main(){
    int x1,x2,x3,y1,y2,y3,m1,m2;
    cout<<"Enter the three points (x1,y1),(x2,y2),(x3,y3):"<<endl;
    cin>>x1>>y1>>x2>>y2>>x3>>y3;
    //slope of AB=slope of BC
    m1=y2-y1/x2-x1;
    m2=y3-y2/x3-x2;
    if(m1==m2){
        cout<<"All the three points fall on a straight line(co-linear points)."<<endl;
    }else{
        cout<<"All the three points DON'T fall on a straight line(NON-Co-linear points)"<<endl;
    }
   return 0;
}
/*
Enter the three points (x1,y1),(x2,y2),(x3,y3):
-2
2
2
5
6
8
All the three points fall on a straight line(co-linear points).
*/