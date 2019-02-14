#include<bits/stdc++.h>
using namespace std;
int main(){
   char s[100];
    int i,r,cnt=0;
    gets(s);
        for(i=0;i<strlen(s);i++){
                  s[i]=tolower(s[i]);
           // if(s[i]=='a'||s[i]=='e'||s[i]=='y'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
            if(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'||s[i]=='Y'){
            continue;}
            else
                cnt++;
            cout<<cnt;
            }
return 0;
}
