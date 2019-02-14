#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll a[100005],f[100005];
vector<ll>from;
int main()
{
    ll i,m,n,k,ans;
    f[0]=1;
    from.push_back(1);
    cin>>n;
    for(i=0; i<n; i++)cin>>a[i];
    for(i=1; i<n; i++) { f[i]=f[i-1]+a[i-1];from.push_back(f[i]); }

    cin>>m; while(m--) {cin>>k; cout<<upper_bound(from.begin(),from.end(),k)-from.begin()<<endl;}
}
