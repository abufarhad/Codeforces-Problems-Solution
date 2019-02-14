#include<bits/stdc++.h>
using namespace std;
int main(){
long long i,j,m,n,d,e;
cin>>m>>n;

for(i=1; ;  i++){
if(i%2!=0){
    m-=i;
   if(m<0) {  cout<<"Vladik"<<endl;  return 0; } }
else
    n-=i;
    if(n<0) {cout<<"Valera"<<endl;   return 0; } }
return 0;
}
