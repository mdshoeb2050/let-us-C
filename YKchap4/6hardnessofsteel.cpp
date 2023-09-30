#include<iostream>
using namespace std;
int main(){
    float hardness,cc,ts;
    cout<<"Enter hardness , Corbon content and tensile strength:"<<endl;
    cin>>hardness>>cc>>ts;
    if(hardness>50 && cc<0.7 && ts>5600){
        cout<<"Grade is 10"<<endl;
        exit(0);
    }
    if(hardness>50 && cc<0.7 && ts<=5600){   //3rd condition false
        cout<<"Grade is 9"<<endl;
        exit(0);
    }
    if(hardness<=50 && cc<0.7 && ts>5600){     //1st condition false
        cout<<"Grade is 8"<<endl;
        exit(0);
    }
     if(hardness>50 && cc>=0.7 && ts>5600){    //2nd condition false
        cout<<"Grade is 7"<<endl;
        exit(0);
    }
     if(hardness>50 || cc<0.7 || ts>5600){   // only 1 
        cout<<"Grade is 6"<<endl;
        exit(0);
    }
      cout<<"Grade is 5"<<endl;
      return 0;
}

/*
Enter hardness , Corbon content and tensile strength:
500
0.4
8700
Grade is 10

*/