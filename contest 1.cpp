#include<bits/stdc++.h>
using namespace std;
int main()
{
   char  s;
    int n,cn=0,cnt=0;
    cin>>n;
while(n--){

    cin>>s;
    if(s=='A') cnt++;
    if(s=='D') cn++;
}
if(cnt>cn){ cout<<"Anton";}
 if(cnt<cn){cout<<"Danik";}
if(cnt==cn)  cout<<"Friendship";


    return 0;
}

