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
#define debug               cout<<"I am here"<<endl;
#define pno                 cout<<"NO"<<endl
#define pys                 cout<<"YES"<<endl

#define l(s)                s.size()
#define asort(a)            sort(a,a+n)
#define all(x) 	            (x).begin(), (x).end()
#define dsort(a)            sort(a,a+n,greater<int>())
#define vasort(v)           sort(v.begin(), v.end());
#define vdsort(v)           sort(v.begin(), v.end(),greater<int>());
#define uniquee(x)          x.erase(unique(x.begin(), x.end()),x.end())
#define pn                  cout<<endl;
#define md                  1000000007
#define inf                 1e18
#define ps                  cout<<" ";
#define Pi                  acos(-1.0)
#define mem(a,i)            memset(a, i, sizeof(a))
#define tcas(i,t)           for(ll i=1;i<=t;i++)
#define pcas(i)             cout<<"Case "<<i<<": "<<"\n";
#define fast 	ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
#define N 1005

ll a[N] , b[N] , c[N] , p[N];

int main()
{
    fast;
    ll t;
    ll m,n,d,i,j,k,x,y,z,l,q,r;

    ll cnt=0,ans=0,sum=0, sm=0, mx=0, pos=0;
    scl(n);
    fr1(i,n)  cin>>a[i];

    fr1(i, n)
    {
        c[i]=a[i];
        sm=a[i];

        for(j=i-1  ; j>=1; j--)
        {
            c[j]=min(a[j] , c[j+1] );
            sm+=c[j];
        }
        for(j=i+1; j<=n; j++)
        {
            c[j]=min(a[j] , c[j-1] );
            sm+=c[j];
        }

        if(sm>ans )
        {
            ans=sm;
            fr1(j, n)p[j]=c[j];
        }
    }

    fr1(j, n)cout<<p[j]<<" ";


    return 0;
}

///Before submit=>
///    *check for integer overflow,array bounds
///    *check for n=1





