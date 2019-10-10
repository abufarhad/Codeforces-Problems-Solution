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

#define N 100006
set<ll>s;
ll pr[1000];

ll pfind(ll n)
{
    if(pr[n]==n ) return n;
    return pr[n]=pfind( pr[n] );

}

void make_parent( ll p, ll q)
{
    ll x=pfind(p);
    ll y=pfind(q);


   if(p !=q) pr[y]=x;
}

int main()
{

    ll m,n,t,b,c,d,i,j,k,x,y,z,l,q,r;

      ll cnt=0,zero=0;
      scl(n); scl(m);

      fr1(i, m)pr[i]=i;

      vector<ll>v, v1;

      while(n--)
      {
         cin>>z;
         if(z==0)zero++;


         fr(j,z)
         {
             cin>>x; v.pb(x);
             s.insert(x);
         }

         if(v.size() >1)
         {
             fr(j, v.size()-1)
             {
                 //cout<<v[j]<<"- "<<v[j+1]<<endl;
                 make_parent(v[j], v[j+1] );
             }
         }

         v.clear();
      }

      set< ll > :: iterator it;

      for(it = s.begin(); it != s.end() ; it++)v1.pb(*it);

      if(v1.size() >1 )   fr(i, v1.size())  if(pr[v1[i]]==v1[i])cnt++;

      if(cnt>=1)cnt--;

      pfl(zero+cnt);

return 0;
}





