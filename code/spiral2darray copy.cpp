#include <iostream>
using namespace std;

int main() {
int n,m;
cin>>n>>m;
int a[n][m];
for(int i=0;i<n;i++)
for(int j=0;j<m;j++)
cin>>a[i][j];
for(int i=0;i<n;i++){
for(int j=0;j<m;j++){
cout<<a[i][j];}
cout<<endl;}
  int r1=0,r2=n-1,c1=0,c2=m-1;
  while(r1<=r2&&c1<=c2){
      for(int k=c1;k<=c2;k++)
      cout<<a[r1][k]<<" ";
      r1++;
      for(int p=r1;p<=r2;p++)
      cout<<a[p][c2]<<" ";
      c2--;
      for(int k=c2;k>=c1;k--)
      cout<<a[r2][k]<<" ";
      r2--;
      for(int p=r2;p>=r1;p--)
      cout<<a[p][c1]<<" ";
      c1--;
  }
    return 0;
}