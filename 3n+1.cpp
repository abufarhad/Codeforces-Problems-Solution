#include<bits/stdc++.h>
using namespace std;
int main(){
 long long  n,i,j,m,cnt,N; int r=0;
 while(scanf("%lld %lld",&n,&m)!=EOF){
  for(i=n;i<=m;i++){
        N=i; cnt=0;
while(1){
cnt++;
if(N==1) break;
else if(N%2==0){ N=N/2;}   else N=3*N+1;}
  if(cnt>r) r=cnt;}
   cout<<n<<" "<<m<<" "<<r;}
return 0;
}



