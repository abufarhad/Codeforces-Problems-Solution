#include<bits/stdc++.h>
using namespace std;
int main(){
int n,m,a,b,c,d,i,j,cnt=0,cn=0,h,g,f;
cin>>n>>m>>a>>b;

h=n/m;  i=n%m;
if(i==0){
g=h*b;  d=n*a;
if(g>d) cout <<d; else cout <<g; }
  else if (m>n){ if(n==a){if(a>b) cout <<b; else cout <<a;} else cout <<b;}

else {
    for(j=0;j<h+1;j++){
    cnt=cnt+b;}
 for(j=0;j<h;j++){
    cn=cn+b;}
f=(i*a)+cn; m=cnt;

if(m>f) cout<<f; else cout<<m;}

return 0;}

