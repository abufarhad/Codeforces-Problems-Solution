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

#define N 100006

int main()
{
    ll t;
    cin>>t;
    tcas(cs, t)
    {
    ll m,n,b,c,d,i,j,k,x,y,z,l,q,r;

    ll cnt=0,ans=0,sum=0 , f=1;
    scl(n);
    ll a[n];

    k=0;
    fr(i,n)cin>>a[i];

    ll color[n];
    mem(color , 0);

    k=1;
    for(i=2; i<=sqrt(1000) ; i++)
    {
        ll vis=0;
        for(j=0; j<n; j++)
        {
            if(color[j]==0  and a[j]%i==0)
            {
                color[j]=k;
                vis++;
            }
        }
        if(vis)k++;
    }

    k--;
    pfl(k);
    fr(i, n)cout<<color[i]<<" "; pn;

    }

return 0;
}

///Before submit=>
///    *check for integer overflow,array bounds
///    *check for n=1




