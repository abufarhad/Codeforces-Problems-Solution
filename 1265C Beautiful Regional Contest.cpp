
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
#define inf                 1e18
#define debug               cout<<"Monti valo nei :( , I am here"<<endl;
#define ps                  cout<<" ";
#define Pi                  acos(-1.0)
#define mem(a,i)            memset(a, i, sizeof(a))
#define tcas(i,t)           for(ll i=1;i<=t;i++)
#define pcas(i)             cout<<"Case "<<i<<": "<<endl;
#define fast 	ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)

#define conv_string(n)	to_string(n)
//ll x[10]= {0,-1,-1,1,1,-2,-2,2,2};
//ll y[10]= {0,-2,2,-2,2,-1,1,-1,1};




int main()
{
    fast;
    ll t;
    cin>>t;
    while(t--)
    {
    ll n;
    cin>>n;

    ll  a[n];
    fr(i,n)cin>>a[i];
    vector<ll> v;
    ll last=-1;

    fr(i, n/2)  if(a[i]>a[i+1]) v.pb(i-last ), last=i;

    if(v.size()<3){cout<<"0 0 0"<<endl;continue;}

    ll g=0, s=0, b=0;


    g=v[0];
    ll i=1;
    while(i<v.size()  and g>=s)  s+=v[i++];

    while(i<v.size())b+=v[i++];

//    if(b==0 )s--, b++;

    if(g<s and g<b) cout<<g<<" "<<s<<" "<<b<<endl;
    else {cout<<"0 0 0"<<endl;continue;}
    }

return 0;
}

///Before submit=>
///    *check for integer overflow,array bounds
///    *check for n=1

