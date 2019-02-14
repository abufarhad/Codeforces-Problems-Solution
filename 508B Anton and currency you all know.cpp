/** ========================================**
 ** @Author: Md. Abu Farhad ( RUET, CSE'15)
 ** @Category:
/** ========================================**/

#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
#define ll long long
#define fr(i,n)        for(int i=0;i<n;i++)
#define fr1(i,n)        for(ll i=1;i<=n;i++)
int main()
{
    ll m,n,i,j;
    string a,b,s;
    while(cin>>s)
    {
        ll   cnt=0,k=0,index=-1,indx,ans;
        n=s.length()-1;

        fr(i,n) { if( (s[i]-'0') %2 ==0 ) { index=i ; if(s[n]>s[i]) break;  } }

        if(index==-1)cout<<"-1"<<endl;
        else{ swap(s[n],s[index]); cout<<s<<endl;}
        }
      }

