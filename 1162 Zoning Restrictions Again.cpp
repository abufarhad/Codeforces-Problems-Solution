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
#define endl 	    "\n"
#define pb                  push_back
#define asort(a)            sort(a,a+n)
#define dsort(a)            sort(a,a+n,greater<int>())
#define vasort(v)         sort(v.begin(), v.end());
#define vdsort(v)         sort(v.begin(), v.end(),greater<int>());
#define pn                  printf("\n")
#define md                  10000007
#define debug               printf("I am here\n")
#define ps                  printf(" ")
ll cnt[100];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll m,n,t,b,c,d,i,j,k,x,y,z,l,q,r;

      ll ans=0;
      cin>>x>>y>>z;
      map<ll,ll>mp;
      fr1(i,x)mp[i]=y;
      fr(i,z)
      {
          cin>>l>>r>>n;
          for(j=l;j<=r;j++) {cnt[j]++; if(cnt[j]>1 )mp[j]=min(mp[j], n ); else  mp[j]=n;}
      }
      fr1(i,x)
      {
          //cout<<mp[i]<<" ";
          ans+=mp[i]*mp[i];
      }
    pfl(ans);

return 0;
}





