#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)

#define N 100000
int main()
{
    ll m, n, i, j;
    while(cin>>n)
    {
        ll a[n];
        fr1(i, n)cin>>a[i] , a[i]+=N;

        cout<<n+1<<endl;
        cout<<1<<" "<<n<<" "<<N<<endl;
        fr1(i, n)
        {
            cout<<2<<" "<<i<<" "<<a[i]-i<<endl;
        }
    }
}
