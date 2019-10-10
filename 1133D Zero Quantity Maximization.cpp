#include<bits/stdc++.h>
using namespace std;
#define ll                  long long
#define scl(n)              scanf("%lld", &n)
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define pfl(x)              printf("%lld\n",x)
#define endl 	            "\n"
int main()
{
    ll m,n,i,j,k;
    cin>>n;
    ll a[n], b[n];
    fr(i,n)cin>>a[i];
    fr(i,n)cin>>b[i];
    ll ans=0, mx=0;
    map<long double, ll>mp;
    fr(i,n)
    {
        if(a[i]==0 and b[i]==0)ans++;
        else
        {
            if(a[i]!=0)
            {
            mp[ (- 1.0 *b[i] )/ a[i] ]++;
            mx= max(mx,mp[ (- 1.0 *b[i] )/ a[i]  ] );
            }
        }
    }
   cout<<(mx+ans )<<endl;
}
