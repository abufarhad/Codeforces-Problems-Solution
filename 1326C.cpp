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
#define md                  998244353



int main()
{
    ll m,n,b,c,d,i,j,k,x,y,z,l,q,r;
    string s,s1, s2, s3, s4;

    ll cnt=0,ans=0,sum=0;
    cin>>n>>k;
    ll a[n];

    ll sorbonimno =n-k+1;

    vector<ll>v;
    fr(i,n)
    {
        cin>>x;
        if(x>=sorbonimno )
        {
            sum+=x;
            v.pb(i);
        }
    }

    ans=1;
    fr(i, v.size()-1) ans*=v[i+1]-v[i] , ans%=md;

    cout<<sum<<" "<<ans<<endl;
return 0;
}

///Before submit=>
///    *check for integer overflow,array bounds
///    *check for n=1

