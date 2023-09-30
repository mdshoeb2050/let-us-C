#include <iostream>
using namespace std;

bool checkyr(int year)
{
      if(year%400==0)
        return true;
      if(year%4==0)
        return true;
     if(year%100==0)
        return false;
   return 0;
}
int main(){
    int yr;
    cout<<"Enter a Year:"<<endl;
    cin>>yr;
    checkyr(yr) ? cout<<"Leap Year" : cout<<"Not a Leap Year.";  //fun call
    return 0;
}