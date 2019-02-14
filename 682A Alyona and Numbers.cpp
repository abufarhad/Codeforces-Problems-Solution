#include<bits/stdc++.h>
using namespace std;
int main() { long long m,n,i,k,ans,l; while(cin>>m>>n) {  ans=0; for( i=1;i<=m;i++) {ans+=(n+(i%5) )/5;} cout<<ans<<endl; }}
