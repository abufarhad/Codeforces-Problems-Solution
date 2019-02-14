#include<bits/stdc++.h>
using namespace std;
int main(){
   int m,n,d,s,e;
   cin>>m>>n;
 d=m; s=m;
  while(d>=n){
d=m/n;  e=m%n;
  s=s+d;
  d=d+e;  m=d;
  }
   cout<<s;
return 0;
}
