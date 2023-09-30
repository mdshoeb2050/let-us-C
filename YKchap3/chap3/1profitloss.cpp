#include<iomanip>
#include<iostream>
using namespace std;
int main(){
    float cp,sp,profit,loss,pf_per,loss_per;
    cout<<"Enter CP and SP:"<<endl;
    cin>>cp>>sp;
    profit=sp-cp;
    loss=cp-sp;
    pf_per=(profit*100)/cp;
    loss_per=(loss*100)/cp;
    if(sp>cp){
        cout<<"Seller has made profit Rs: "<<profit<<endl;  
         cout<<"Profit % is : "<<setprecision(2)<<pf_per<<endl;  
     }else{
         cout<<"Seller has made loss Rs: "<<loss<<endl;   
         cout<<"Loss % is : "<<setprecision(2)<<loss_per<<endl;   
     }
     return 0;
}
/*
without setprecision(2)
Enter CP and SP:
5500
5800
Seller has made profit Rs: 300
Profit % is : 5.45455

using setprecision(2)

Enter CP and SP:
5500
5800
Seller has made profit Rs: 300
Profit % is : 5.5
*/