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

#define N 300006
ll n, m, a[N] , b[N];

bool chk(ll a1, ll a2 )
{
    fr1(i, m)
    {
        if(a1==a[i]  or a2==a[i]  or a1==b[i] or a2==b[i]   )continue;
        if(a2==-1) return (chk(a1 , a[i]) or chk(a1, b[i]) );
        else return 0;
    }
    return 1;
}

int main()
{
    fast;
    ll c,d,i,j,k,x,y,z,l,q,r;
    cin>>n>>m;

    fr1(i, m)cin>>a[i]>>b[i];

    if(chk(a[1], -1)  or chk(b[1] , -1) )pys;
    else pno;

return 0;
}
