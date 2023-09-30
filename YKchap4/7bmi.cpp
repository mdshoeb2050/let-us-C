#include<iostream>
using namespace std;
int main(){
    float weight,h,bmi;
    cout<<"Enter Your Weight and Height:"<<endl;
    cin>>weight>>h;
    bmi=weight/(h*h);   // bmi formula
    if(bmi<15){
        cout<<"Starvation"<<endl;
    }
    else if(bmi<17.6){
        cout<<"Anorexic"<<endl;
    }
    else if(bmi<18.6){
        cout<<"Underweight"<<endl;
    }
    else if(bmi<25){
        cout<<"Ideal"<<endl;
    }
    else if(bmi<30){
        cout<<"Overweight"<<endl;
    }
    else if(bmi<40){
        cout<<"Obese"<<endl;
    }
    else{
         cout<<"Morbidly Obese"<<endl;
    }
  return 0;
}
