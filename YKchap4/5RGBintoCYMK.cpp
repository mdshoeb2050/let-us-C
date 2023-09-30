#include<iostream>
using namespace std;
int main(){
    float red,green,blue,white,cyan,magneta,yellow,black;
    float max;
    cout<<"Enter three colors RGB value:"<<endl;
    cin>>red>>green>>blue;
    if(red==0 && green==0 && blue==0)
    {
        cyan=magneta=yellow=0;
        black=1;
    }
    else
    {
      red=red/255;
      green=green/255;
      blue=blue/255;
      max=red;
    
     if(green>max)
      {
        max=green;
       }
      if(blue>max)
       {
        max=blue;
       }
    white=max;
    cyan=(white-red)/white;
    magneta=(white-green)/white;
    yellow=(white-blue)/white;
    black=1-white;
 }
 cout<<"CYMK="<<" "<<cyan<<" "<< magneta<<" "<< yellow <<" "<< black <<endl;
 return 0;
}