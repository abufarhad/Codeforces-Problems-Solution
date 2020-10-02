
#include<bits/stdc++.h>
#include<stdio.h>
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
using namespace std;


#define ll                  long long
#define scl(n)              scanf("%lld",&n)
#define scll(n, m)              scanf("%lld%lld",&n, &m)
#define scc(c)	            scanf("%c",&c)
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define pfl(x)              printf("%lld\n",x)
#define pb                  push_back
#define debug               cout<<"I am here"<<endl;
#define pno                 cout<<"NO"<<endl
#define pys                 cout<<"YES"<<endl
#define tcas(i,t)           for(ll i=1;i<=t;i++)


#define N 1000006
vector<ll>v;
ll find_all_divisor(ll n){  fr1(i,sqrt(n)){     ll x;  if(n % i == 0)  { x = n / i; v.pb(i);  if(i != x) v.pb(x);}}}

int main()
{
    ll t;
    cin>>t;

    tcas(cs, t)
    {
        ll m,n,b,c,d,i,j,k,x,y,z,l,q,r;

        ll cnt=0,cn=0,ans=0,sum=0 ;
        cin>>n>>k;
        if(n%2==0)
        {
            ans=k*2;
            ans+=n;
            pfl(ans);
        }
        else
        {
            find_all_divisor(n);
            sort(v.begin() , v.end());

            ans=n+v[1];
            cnt=2*(k-1);
            ans+=cnt;

            pfl(ans);

            v.clear();
        }
    }

    return 0;
}


