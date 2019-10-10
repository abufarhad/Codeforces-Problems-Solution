#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
ll parent[100005], rmv[100005], respect[100005];
int main()
{
    ll m,n,i,j,k;
    cin>>n;
    fr1(i,n)
    {
        cin>>parent[i]>>respect[i];
        rmv[i]=1;
    }

    fr1(i,n)
    {
        if(respect[i]==0)
        {
            rmv[i]=0;
            rmv[parent[ i ]]=0;
        }
    }
    //cout<<rmv[-1]<<endl;

    ll ans=0, cnt=1;

    fr1(i,n)
    {
        if(rmv[i]==1)cout<<i<<" " , cnt=0;
    }

    if(cnt)cout<<"-1"<<endl;
}
