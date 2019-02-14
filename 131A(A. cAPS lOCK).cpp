#include<bits/stdc++.h>
using namespace std;
 int main()
 {
     string a,b;
     int i,l,cnt=0;
     cin>>a;
     l=a.length();
     for(i=0;i<l;i++){
         if(a[i]==tolower(a[i])){ cnt++;} }

  if(cnt==0){
     for(i=0;i<l;i++){ a[i]=tolower(a[i]);} cout<<a<<endl;}

     else if(cnt==1 && a[0]==tolower(a[0])){
            a[0]=toupper(a[0]);
      for(int v=1;v<l;v++) a[v]=tolower(a[v]);
      cout<<a<<endl;}

     else cout<<a<<endl; return 0;

     return 0;
 }
