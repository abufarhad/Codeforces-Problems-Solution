//! Bismillahi-Rahamanirahim.
/** ========================================**
 ** @Author: Md. Abu Farhad ( RUET, CSE'15)
 ** @Category:
/** ========================================**/

#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;


#define ll                  long long
#define scl(n)              scanf("%lld", &n)
#define scf(n)              scanf("%lf", &n)
#define pfl(x)              printf("%lld\n",x)
#define md                  10000007
#define pb                  push_back
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)

int main()
{
    ll m,n,t,b,c,d,i,j,k,x=1,y,z,l,q,r;
    string s,s1;
    map<string, ll>mp;

      ll cnt=0,ans=0;
      scl(n);
      ll  a[n];
      for(i=0;i<n;i++)
      {
          cin>>s;

          if(mp[s]>=1) { mp[s]=mp[s]+1;}
          else mp[s]=++cnt;

          cnt=0;
          //cout<<mp[s]<<endl;

          if( mp[s]==1 )cout<<"ok"<<endl;
          else  if(mp[s]>=1){ cout<<s<<mp[s]-1<<endl; x++; }

      }

return 0;
}




