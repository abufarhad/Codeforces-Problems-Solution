#include<bits/stdc++.h>
using namespace std;
int main(){
string s1,s2;  int l,l1,i;
cin>>s1>>s2;
l=s1.length();
for(i=0;i<l;i++){
    s1[i]=toupper(s1[i]);
    s2[i]=toupper(s2[i]);}

    if(s1.compare(s2)>0)
    {
        cout<<"1";
    }
    else  if(s1.compare(s2)<0)
    {
        cout<<"-1";
    }
    else
         cout<<"0";
//     if(s1.compare(s2)<0)
//    {
//        cout<<"-1";
//    }
return 0;}
