//! Bismillahi-Rahamanirahim.
/** ========================================**
 ** @Author: Md. Abu Farhad ( RUET, CSE'15)
 ** @Category:
/** ========================================**/

#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;


#define ll                  long long
#define scl(n)              cin>>n;
#define scc(c)	            cin>>c;
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define pfl(x)              printf("%lld\n",x)
#define pb                  push_back
#define l(s)                s.size()
#define asort(a)            sort(a,a+n)
#define all(x) 	            (x).begin(), (x).end()
#define dsort(a)            sort(a,a+n,greater<int>())
#define vasort(v)           sort(v.begin(), v.end());
#define vdsort(v)           sort(v.begin(), v.end(),greater<int>());
#define uniquee(x)          x.erase(unique(x.begin(), x.end()),x.end())
#define pn                  cout<<endl;
#define md                  10000007


int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
    ll m,n,a,b,c,d,i,j,k,x,y,z,l,q,r;

    ll cnt=0,ans=0,sum=0;
    cin>>x>>y;
    if(x==y)ans=0;
    else
    {
         a=abs(x-y) ;
         while(a)
         {
             if(a>=5)
             {
                 ans+=a/5 ;
                 a=a%5;
             }
             else if(a>=2)
             {
                 ans+=a/2 ;
                 a=a%2;
             }
             else a--, ans++;
         }

    }
    cout<<ans<<endl;
    }

return 0;
}

