#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
int main()

{
    ll m,n,i,j,k;
    cin>>n;
    ll a[n];
    fr1(i,n)cin>>a[i];

    ll l=0,w=0,h=0, h1=0;
    cin>>m;
    while(m--)
    {
        cin>>w>>h;
        l=max(l+h1, a[w]);
        cout<<l<<endl;
        h1=h;
    }

}
