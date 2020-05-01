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
ll a[5], b[5];

bool calc(ll x, ll y, ll z)
{
    if(a[x]==a[y]  and ( b[z]<=min(b[x] , b[y])  or b[z]>=max(b[x] , b[y])    )) return 1;
    if(b[x]==b[y]  and ( a[z]<=min(a[x] , a[y])  or a[z]>=max(a[x] , a[y])    )) return 1;
    return 0;
}

int main()
{
    fast;
    ll t;
    ll m,n,c,d,i,j,k,x,y,z,l,q,r;
    ll ans=0;
    fr(i, 3)  cin>>a[i]>>b[i];

    if( (a[0]==a[1] and a[1]==a[2] )or (b[0]==b[1] and b[1]==b[2])) ans=1;
    else if( ( calc(0, 1, 2 ) or calc(1, 2 , 0 ) or calc(0, 2 , 1 )   ) )ans=2;
    else ans=3;

    cout<<ans<<endl;

return 0;
}
