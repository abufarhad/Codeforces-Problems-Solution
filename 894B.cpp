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

ll powr(ll b, ll p)
{
    if(p==0)return 1;
    else if(p&1)return b*powr(b, p-1)%md;
    else
    {
        ll tmp=powr(b, p/2)%md;
        return tmp*tmp%md;
    }
}

int main()
{
    fast;
    ll n, m, k;

    while(cin>>n>>m>>k)
    {

    ll ans;
    if( ((n%2==0 and m%2 ) or (n%2 and m%2==0 ) )and k==-1)  ans=0;
    else ans=powr(2, (n-1) )%md  , ans=powr(ans  , m-1)%md;

    cout<<ans<<endl;
    }

return 0;
}

///Before submit=>
///    *check for integer overflow,array bounds
///    *check for n=1




