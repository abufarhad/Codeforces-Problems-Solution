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


int main()
{

    ll m,n,t,c,d,i,j,k,x,y,z,l,q,r;

    cin>>t;
    while(t--)
    {
        ll cnt=0,ans=0;
        scl(n);
        ll  a[n], b[n];
        ll mn=100000000000;
        map<ll,ll>mp;
        fr(i,n)cin>>a[i];
        asort(b);


      for(i=n-1; i>=0;i--)
      {
          if(a[i]>mn )ans++, cout<<a[i]<<" "<<mn<<endl;
          mn=min(mn, a[i]);

      }


        pfl(ans);
    }
    return 0;
}

///Before submit=>
///    *check for integer overflow,array bounds
///    *check for n=1

