#include<bits/stdc++.h>
using namespace std;
int main()
{
    int l,i,c,j=0,len=0; string a;
    int b[100];
    cin>>a;
    l=a.size();
    for(i=0;i<l;i++){
       if((a[i]=='1')||(a[i]=='2')||(a[i]=='3')){
         c=atoi(&a[i]);
       b[j]=c;
         j++; len++;
            }}
            sort(b,b+len);
        for(i=0;i<len;i++){
    cout<<b[i];
    if(i<len-1){
        cout<<"+";
}}
return 0;
}
