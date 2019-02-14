#include<bits/stdc++.h>
using namespace std;
int main(){
   int i,j,n,cnt=0,Min,Max;
   cin>>n;
   int k[n];
   for(i=0;i<n;i++){
    cin>>k[i];
    if(i==0){
        Max=k[i];
        Min=k[i];  }

if(k[i]<Min){
    Min=k[i]; cnt++;
}
if(k[i]>Max){
    Max=k[i]; cnt++;
}}
cout<<cnt;
return 0;
}



