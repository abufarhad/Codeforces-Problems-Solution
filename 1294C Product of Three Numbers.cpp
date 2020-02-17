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
#define all(x) 	            (x).begin(), (x).end()
#define dsort(a)            sort(a,a+n,greater<int>())
#define vasort(v)           sort(v.begin(), v.end());
#define vdsort(v)           sort(v.begin(), v.end(),greater<int>());


int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
    ll n,i;
    ll cnt=0,ans=0,sum=0;
    scl(n);

    ll f[3];

    for(i=2; i*i<n and cnt<2; i++)  if(n%i==0)f[cnt++]=i, n/=i;

    //fr(i, cnt)cout<<f[i]<<" "; cout<<endl;

    if(cnt!=2)cout<<"NO"<<endl;
    else printf("YES\n%lld %lld %lld\n", f[0], f[1], n);
    }

    return 0;
}


