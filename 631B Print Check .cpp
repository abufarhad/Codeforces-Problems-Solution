#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
#define ll                  long long
#define scl(n)              scanf("%lld", &n)
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define pfl(x)              printf("%lld\n",x)
#define pb                  push_back

ll r[5005], c[5005];
ll ok[100005];
int main()
{
    ll m,n,i,k,l,t,j,xr,xr1,cnt=0,cnt1=0,ans=-1,x,y;
    cin>>n>>m>>k;

    fr1(i,k)
    {
        cin>>x>>y>>ok[i];
        if(x==1)r[y]=i; else c[y]=i;
    }

    fr1(i,n)
    {
        fr1(j,m)
        {
            cout<<ok[max(r[i], c[j] )]<<" ";
        }
        cout<<endl;
    }
}
