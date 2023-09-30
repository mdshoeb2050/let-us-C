#include<iostream>
using namespace std;
int main(){
    float l,b,area,perimeter;
    cout<<"Enter the length and breadth:"<<endl;
    cin>>l>>b;
    area=l*b;
    perimeter=2*(l+b);
    if(area>perimeter){
        cout<<"Area of Rectangle is GREATER than its perimeter."<<endl;
    }else{
        cout<<" Perimeter of Rectangle is GREATER than Area."<<endl;
    }
    return 0;
}
/*
Enter the length and breadth:
5
4
Area of Rectangle is GREATER than its perimeter.
*/