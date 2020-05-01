#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
#define ll                  long long
#define fr(i,n)             for (ll i=0;i<n;i++)
int main()
{
    ll n;
    while(cin>>n)
    {
        ll ans=-1;
        fr(i, n)
        {
            ans=max(ans, (i+1)*(n-i) );
        }
        cout<<ans<<endl;
    }
    return 0;
}








