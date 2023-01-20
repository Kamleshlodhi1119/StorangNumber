#include<iostream>
using namespace std;
 // find the highest comman factor HCF

int main(){ 



    // kamleshlodhi is good boy 
    int n,m,x,y;
    cin>>n>>m;
    x=n; y=m;
    while(x!=y){
 if(x>y)
 x-=y;
 else y-=x;
    }
    cout<<x;
}