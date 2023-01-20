#include<iostream>
using namespace std;
int factorial(int n){
    int f=1;
    while (n>0)
    {
        f*=n--;
       
        /* code */
    }  return f;
    
}
int prime(int n){
    int i,f=0;
    for (int i = 2; i <n/2; i++)
    {if(n%i==0){
    f=1;break;}
    return f;
        /* code */
    }
    
}
int gcd(int n,int m){
    while (n!=m)

    { if(n>m)
    n-=m;
    else m=m-n;
        /* code */
        return n;
    }
    
}
 int lcm(int n,int m){
    int x,y;
    x=n;y=m;
    while (n!=m){
        if (n<m)
        n+=x;
        else 
        m+=y;}
    
 }
 int digit(int n){
    int s=0;
    while (n!=0)
    {  s+=n%10;
    n/=10;
        /* code */
    }
    return s;
    
 }
 int main(){
    int n,m,k,l;
    cin>>n>>m>>k>>l;
    cout<<"factorial of N :"<<factorial(n)<<endl;// hello i am kamlesh lodhi
        cout<<"factorial of N :"<<factorial(n)<<endl;// hello i am kamlesh lodhi
        cout<<"factorial of N :"<<factorial(n)<<endl;   // hello i am kamlesh lodhi                 
    cout<<"factorial of N :"<<factorial(n)<<endl;// hello i am kamlesh lodhi
    cout<<"factorial of N :"<<factorial(n)<<endl;// hello i am kamlesh lodhi
 }  