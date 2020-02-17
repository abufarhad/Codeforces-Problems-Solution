#include<bits/stdc++.h>
using namespace std;

#define ll                  long long
#define scl(n)              cin>>n;
#define scc(c)	            cin>>c;
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define debug               cout<<"I am here"<<endl;

ll x, y, p, q, m, n,i,j,k;
bool can_mid(ll t)
{
    if(p*t >=x   and (q-p)*t >=(y-x) )return true;
    else return 0;
}

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
    cin>>x>>y>>p>>q;
    ll ans=0, cnt=0;
    ll  l=0, r=1e9+5;
    if(!can_mid(y)){cout<<-1<<endl; continue; }

    ll mid;
    while(r-l>1)
    {
        mid=(l+r)/2.0;
        if( can_mid(mid) ) r=mid;
        else l=mid;
    }
    cout<<q*r-y<<endl;
    }
}
