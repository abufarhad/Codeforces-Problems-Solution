#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,i,c=0,n=0,j;
    cin>>a;
   for(i=0;i<a;i++){
        cin>>n;
   if(n==0) break;
   for(j=0; ;j++){
    c=c+n/3;
    n=n+n%3;
   if(n==2) n=n+1;
   if(n==1)  break;}
     cout<<c;
   }

return  0;
}
