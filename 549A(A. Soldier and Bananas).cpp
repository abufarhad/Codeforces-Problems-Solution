#include<bits/stdc++.h>
using namespace std;
int main(){
    int k,n,w,i,d=0,m;
    cin>>k>>n>>w;
for(i=1;i<=w;i++){
    d=d+(k*i);
}
m=d-n;
if(m<0){
    cout<<"0";
}
else
cout<<m;
return 0;
}

