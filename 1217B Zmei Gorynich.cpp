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

int main()
{
    ll m,n,i,k,j;
    cin>>k;
    while(k--)
    {
        cin>>n>>m;
        ll cnt=0, ans=0;
        ll a[n],x,y;
        ll mxd=-1e18, mx=-1e18;
        fr(i,n)
        {
            cin>>x>>y;
            mxd=max(mxd, (x-y));
            mx=max(mx, x);
        }
        if(mx>=m )cout<<"1"<<endl;
        else if(mxd<=0)cout<<"-1"<<endl;
        else
        {
            ll p=m-mx;
            if(p%mxd)cout<<(p/mxd)+2<<endl;
            else  cout<<(p/mxd)+1<<endl;
        }
    }
}
