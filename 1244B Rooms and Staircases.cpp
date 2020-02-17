#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
int main()
{
     ll i,j,m,n,t;
     cin>>t;
     while(t--)
     {
       string s;
       cin>>n>>s;
       ll cnt=0,zro=0, one=0,ans=0,lzro=0, rzro=0, left=0, right=0;

       fr(i,n)if(s[i]=='0')zro++; else one++;


       fr(i,n)if(s[i]!='1'){lzro++; left++; }else break;

       for(i=n-1 ; i>=0; i--)if(s[i]!='1'){rzro++; right++;} else break;

       if(zro==n)ans=n;
       else if(s[0]=='1' or s[n-1]=='1')ans=2*n;
       else
       {
           if(lzro >=rzro)
           {
               ans=(n-rzro)*2;
           }
           else ans=(n-lzro)*2;
       }

     cout<<ans<<endl;
}
}
