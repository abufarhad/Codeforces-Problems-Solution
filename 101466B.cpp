#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll i, j, m, n;
    cin>>n;
    ll a[n];
    for(i=0; i<n; i++)cin>>a[i];
    sort(a, a+n, greater<int>());

    ll ans=1 , tmp=1;
    for(i=0; i<n; i++)
    {
        tmp=a[i]*tmp;
        ans+=tmp;
    }
    cout<<ans<<endl;
}
