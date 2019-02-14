#include <bits/stdc++.h>
using namespace std;
int main( ){
char str[100];
int i,l,count=0,j;
cin>>str;
l=strlen(str);
sort(str,str+l);
for(i=0;i<l;i++){
       if(str[i]!=str[i+1]){
    count++;}}
    //cout<<count<<endl;
if(count%2==0){
    cout<<"CHAT WITH HER!";
}
else
cout<<"IGNORE HIM!";
return 0;
}
