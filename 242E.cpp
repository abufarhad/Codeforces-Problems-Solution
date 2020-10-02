//! Bismillahi-Rahamanirahim.
/** ========================================**
 ** @Author: Md. Abu Farhad ( RUET, CSE'15)
 ** @Category:
/** ========================================**/

#include<bits/stdc++.h>
#include<stdio.h>
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
using namespace std;


#define ll                  long long
#define scl(n)              scanf("%lld",&n)
#define scc(c)	            scanf("%c",&c)
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define pfl(x)              printf("%lld\n",x)
#define pb                  push_back
#define debug               cout<<"I am here"<<endl;
#define pno                 cout<<"NO"<<endl
#define pys                 cout<<"YES"<<endl
#define tcas(i,t)           for(ll i=1;i<=t;i++)

#define l(s)                s.size()
#define asort(a)            sort(a,a+n)
#define all(x) 	            (x).begin(), (x).end()
#define dsort(a)            sort(a,a+n,greater<int>())
#define vasort(v)           sort(v.begin(), v.end());
#define vdsort(v)           sort(v.begin(), v.end(),greater<int>());
#define uniquee(x)          x.erase(unique(x.begin(), x.end()),x.end())
#define pn                  printf("\n")
#define el                  cout<<endl
#define md                  1000000007
#define inf                 9e18
#define ps                  cout<<" ";
#define Pai                  acos(-1.0)
#define pr                  pair<ll, ll>
#define ff                  first
#define ss                  second
#define mem(a,i)            memset(a, i, sizeof(a))
#define pcas(i)             cout<<"Case "<<i<<": "<<endl;
#define fast 	ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
#define N 100006


ll a[N], tree[4*N];
/*
ll build(ll nd , ll l, ll r)
{
    if(l==r)return tree[ nd ]=a[l];

    ll left=2*nd,   right=left+1;
    ll mid=(l+r)/2;

    ll p=build(left, l , mid );
    ll q=build(right , mid+1 , r );

    return tree[nd]=p+q;
}

ll update(ll nd, ll l, ll r, ll s, ll e , ll x )
{
    if(e<l or s>r  )return 0;

    if(s<=l and e>=r)
    {
        if(l==r)return tree[nd]=a[l]^x;
    }

    ll left=2*nd,   right=left+1;
    ll mid=(l+r)/2;

    ll p=update( left , l , mid, s, e, x );
    ll q=update( right , mid+1 , r,s, e, x );

    return tree[nd]=p+q;
}

ll query(ll nd, ll l , ll r , ll s, ll e)
{
    if(e<l or s>r  )return 0;
    if(s<=l and e>=r)return tree[nd];

    ll left=2*nd,   right=left+1;
    ll mid=(l+r)/2;

    ll p=query(left, l , mid , s, e);
    ll q=query(right , mid+1 , r , s, e);

    return p+q;
}
*/


int main()
{
    ll m,n,b,c,d,i,j,k,x,y,z,l,q,r;

    ll cnt=0,cn=0,ans=0,sum=0 ;
     scl(n);

    fr1(i,n) scl(a[i]);
    //build(1, 1, n);

    scl(q);
    while(q--)
    {
        ll typ;
        scl(typ);
        if(typ==1)
        {
           scl(l), scl(r);
           sum=0;
           for(i=l; i<=r; i++)sum+=a[i];
            //ans=query(1, 1, n, l, r);
           pfl(sum);
        }
        else
        {
            scl(l), scl(r), scl(x);
            for(i=l; i<=r; i++)a[i]^=x;
            //update(1, 1, n, l, r, x);
        }
    }

return 0;
}

///Before submit=>
///    *check for integer overflow,array bounds
///    *check for n=1



