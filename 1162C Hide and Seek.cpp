#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define fr(i,n)             for (ll i=0;i<n;i++)
#define ll          long long


ll ans[200005],posi[200005],posf[200005],a[200005];

int main()
{
    ll m,n,i,k,j,f;
    cin>>n>>k;

    fr1(i,n) posi[i]=-1, posf[i]=-1;

    fr1(i,k)
    {
        cin>>a[i];
        posf[a[i]]=i;                                    ///final pos
        if(posi[a[i]]==-1)posi[a[i]]=i;             ///initial pos
    }

    fr1(i,n)
    {
            if(posi[i]==-1)
            {
                ans[i ]++;
                if(i+1<=n )ans[i]++;
                if(i-1 >0)ans[i]++;
                continue;                   ///Repeat the loop from initial
            }

        ll x=i, y=i+1;
        if(posi[x]<posf[y] || y>n);
        else ans[x]++;

        y=i-1;

        if(posi[x]<posf[y] || y<=0);
        else ans[x]++;
    }

    ll res=0;
    fr1(i,n)  res+=ans[i];
    cout<<res<<endl;
}
