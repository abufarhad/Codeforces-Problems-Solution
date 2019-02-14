#include<bits/stdc++.h>
using namespace std;
int main(){
   int n,i,j,cnt=0,cn=0,cd=0,a,b,c;
   cin>>n;
   for(i=0;i<n;i++){
    cin>>a;    cnt+=a;}
    for(i=0;i<n-1;i++){
    cin>>b; cn+=b;}
    for(i=0;i<n-2;i++){
    cin>>c;  cd+=c;}

    cout<<(cnt-cn)<<endl;
    cout<<(cn-cd)<<endl;
}


