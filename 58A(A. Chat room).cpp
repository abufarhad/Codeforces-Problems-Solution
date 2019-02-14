#include<bits/stdc++.h>
using namespace std;
 int main()
 {
string  s,w="hello";
int i,l,a=0,cnt=0;
cin>>s;
l=s.size();
for(i=0;i<l;i++){
 if(s[i]==w[a]){
    a++; cnt++;}
 }
 if(cnt==5)  cout<<"YES";
else   cout<<"NO";
     return 0;
 }

