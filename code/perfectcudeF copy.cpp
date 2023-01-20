#include <iostream>
using namespace std;

int main() {
int n,count,f=0;;
cin>>n;
for(int i=1;i;i++)
{
count=i*i*i;
if(count==n)
{
    f=1;
    break;
}
else if(count>n)
{
    break;
    
}
}

if(f==0)
cout<<"not";
else
cout<<"yes";

    return 0;
}