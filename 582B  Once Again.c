#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define pb                  push_back
#define pn                  printf("\n")
int main()
{
    ll m,n,i,j,k;
    cin>>n>>m;
    ll a[n][m];
    fr(i, n)fr(j,m)cin>>a[i][j];

    fr(i,n)
    {
        fr(j,m)
        {
            cout<<a[i][j]<<" ";
        }
        pn;
    }
}
