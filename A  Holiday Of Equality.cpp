#include<bits/stdc++.h>
using namespace std;
int main(){
int n,j,a,i;
cin>>n; int N[n];
for(i=0;i<n;i++){
    cin>>N[i];  }
   sort(N,N+i);
        int cnt=0,d,s,e;
        for(i=0;i<n-1;i++){
                d=N[n-1]-N[i];   cnt+=d;}
        cout<<cnt;
return 0;}
