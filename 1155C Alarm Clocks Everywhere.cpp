#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;


#define ll                  long long
#define scl(n)              scanf("%lld", &n)
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define pfl(x)              printf("%lld\n",x)
#define endl 	    "\n"
#define pb                  push_back
#define asort(a)            sort(a,a+n)
#define dsort(a)            sort(a,a+n,greater<int>())
#define vasort(v)         sort(v.begin(), v.end());
#define vdsort(v)         sort(v.begin(), v.end(),greater<int>());
int main()
{
    ll m,n,i,k,l,r,cnt=0;
    cin>>n>>m;
    ll a[n], b[m];
    fr(i,n)cin>>a[i];
    fr(i,m)cin>>b[i];

    ll g=a[1]-a[0];
    k=0;

    for(ll j=2;j<n;j++)  g=__gcd(g, a[j]-a[j-1] );

    fr(i,m)
    {
        if(g%b[i]==0)
        {
            cout<<"YES"<<endl;
            cout<<a[0]<<" "<<i+1<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;
}
