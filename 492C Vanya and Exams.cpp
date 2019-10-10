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
#define asort(a)            sort(a,a+n)
#define dsort(a)            sort(a,a+n,greater<int>())
#define vasort(v)         sort(v.begin(), v.end());
#define vdsort(v)         sort(v.begin(), v.end(),greater<int>());
#define pn                  printf("\n")
#define md                  10000007
#define debug               printf("I am here\n")
#define ps                  printf(" ")
#define l(s)                      s.size()
#define tcas(i,t)             for(ll i=1;i<=t;i++)
#define pcas(i)                printf("Case %lld: ",i)
vector< pair<ll,ll> > v;

int main()
{

    ll m,n,t,b,c,d,i,j,k,x,y,z,l,q,r;
     ll  avg;

      ll cnt=0,ans=0, cn=0;
      scl(n);
     cin>>r>>avg;


     fr(i,n)
     {
         cin>>x>>y;
         v.pb(make_pair(y,x) );
         cnt+=x;
     }
    sort(v.begin(), v.end());



    ll baki=avg*n -cnt;

        i=0;
        while(baki >0)
        {
            if(r-v[i].second >=0 ){
            ans+=v[i].first* min(baki, (r-v[i].second) );
            baki-=r-v[i].second;
            }
            i++;
        }

    pfl(ans);
return 0;
}





