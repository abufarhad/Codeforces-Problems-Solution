#include<bits/stdc++.h>
using namespace std;
int main(){
string s;  long long  i,d,cnt=0,len;
cin>>s;
len=s.length();  int a[len]; //cout<<len<<endl;
for(i=0;i<len;i++){
if(s[i]=='4'||s[i]=='7') cnt++;   }
//cout<<cnt<<endl;

if(cnt==4||cnt==7){
//if(cnt%4==0||cnt%7==0||cnt%47==0)
    cout<<"YES";}
    else
    cout<<"NO";
return 0;}

