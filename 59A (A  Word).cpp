#include<bits/stdc++.h>
using namespace std;
int main()
{
    int l,i,cnt=0,ct=0;
    char s[100];
    cin>>s;
    for(i=0;i<strlen(s);i++){
        if(s[i]>='A'&&s[i]<='Z') {cnt++;}
        else if  (s[i]>='a'&&s[i]<='z') ct++;
    }
    if(cnt>ct){
        for( i=0; i<strlen(s); i++){
        s[i]=toupper(s[i]);
        cout<<s[i];}}
        else
           for( i=0; i<strlen(s); i++){
       s[i]=tolower(s[i]);
       cout<<s[i];}

    return 0;
}

