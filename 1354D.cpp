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
#define N 1000005

int tree[4*N];

void update(ll node, ll l, ll r, ll pos)
{
    if(l>pos  or r<pos)return;
    if(l==pos and r==pos){tree[node]++;return ;}

    ll mid=(l+r)/2;
    ll left=2*node , right=left+1;

    update(left, l, mid, pos);
    update(right , mid+1, r, pos);

    tree[node]=tree[left]+tree[right];
}


void del(ll node , ll l, ll r, ll val)
{
    if(l==r){tree[node]--; return;}

    ll mid=(l+r)/2;
    ll left=2*node , right=left+1;


    if(tree[left]>=val)del(left , l, mid, val);
    else del(right, mid+1, r, val-tree[left]);

    tree[node]=tree[left]+tree[right];
}



ll query(ll node, ll l , ll r)
{
    if(l==r)return l;

    ll mid=(l+r)/2;
    ll left=2*node , right=left+1;

    if(tree[left])query(left, l, mid);
    else  query(right, mid+1, r);
}

int main()
{
    ll n,i,x,l,q,r;

    scll(n,q);

    fr(i, n)
    {
        scl(x);
        update(1, 1, N , x);
    }

    fr(i, q)
    {
        scl(x);
        if(x<0)
        {
            del(1, 1, N, abs(x));
        }
        else update(1, 1, N, x);
    }

    ll ans=0;
    if(tree[1]>=1)  ans=query(1, 1, N);

    pfl(ans);



return 0;
}
