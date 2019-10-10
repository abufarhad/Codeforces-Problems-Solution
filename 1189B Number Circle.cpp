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
    fr(i,n)cin>>a[i];
    sort(a,a+n);

    if(a[n-3]+a[n-2] <=a[n-1])cout<<"NO"<<endl;
    else
    {
        cout<<"YES"<<endl;
        cout<<a[n-1]<<" ";
        for(i=n-3;i>=0;i-- )cout<<a[i]<<" ";
        cout<<a[n-2]<<endl;
    }
}
