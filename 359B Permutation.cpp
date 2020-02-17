
#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;


#define ll                  long long
#define scl(n)              cin>>n;
#define scc(c)	            cin>>c;
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define pfl(x)              printf("%lld\n",x)
#define pb                  push_back
#define l(s)                s.size()
#define asort(a)            sort(a,a+n)
#define dsort(a)            sort(a,a+n,greater<int>())
#define vasort(v)           sort(v.begin(), v.end());
#define inf                 1e18
#define pn                  cout<<endl;

int main()
{
    ll m,n,i,j,k;
    while(cin>>n>>k)
    {
        ll a[2*n+1];

        fr1(i, 2*n)a[i]=i;

        fr1(i, k)  swap(a[2*i-1], a[2*i]);

        fr1(i, 2*n)cout<<a[i]<<" ";
        pn;
    }

}
