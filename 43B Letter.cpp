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
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define pfl(x)              printf("%lld\n",x)
#define endl 	            "\n"
#define pb                  push_back
#define l(s)                s.size()
#define asort(a)            sort(a,a+n)
#define dsort(a)            sort(a,a+n,greater<int>())
#define vasort(v)           sort(v.begin(), v.end());
#define vdsort(v)           sort(v.begin(), v.end(),greater<int>());
#define pn                  printf("\n")
#define md                  10000007
#define inf                 1<<28
#define debug               printf("I am here\n")
#define ps                  printf(" ")
#define mem(a,i)            memset(a, i, sizeof(a))
#define tcas(i,t)           for(ll i=1;i<=t;i++)
map<char, ll>mp;
int main()
{
    ll m,n,t,b,c,d,i,j,k,x,y,z,l,q,r;

      ll cnt=0,ans=0;
      string s,s1, s2;

      getline(cin, s);
      getline(cin, s2);


      fr(i, l(s)) mp[ s[i] ]++;
      j=0;

      char ss=' ';
      fr(i, l(s2))if(s2[i] ==ss){ continue; }else { s1+=s2[i];}

      fr(i, l(s1))
      {
          if(mp[s1[i] ]>0  )mp[s1[i] ]--, cnt++;
          else {cout<<"NO"<<endl;return 0; }
      }
      if(cnt==l(s1) )cout<<"YES"<<endl;
      else cout<<"NO"<<endl;
return 0;
}
