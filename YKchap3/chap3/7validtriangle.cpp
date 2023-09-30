#include<iostream>
using namespace std;
int main(){
    int a,b,c,sum=0;
    cout<<"Enter the Angles:"<<endl;
    cin>>a>>b>>c;
    sum=a+b+c;
    if(sum==180){
        cout<<"Triangle is Valid."<<endl;
    }else{
        cout<<"Triangle is NOT Valid."<<endl;
    }
    return 0;
}
/*
Enter the Angles:
45
45
90
Triangle is Valid.

Enter the Angles:
50
30
80
Triangle is NOT Valid

*/