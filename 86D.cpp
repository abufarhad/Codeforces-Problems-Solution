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
#define tcas(i,t)           for(ll i=1;i<=t;i++)
#define pcas(i)             cout<<"Case "<<i<<": "<<endl;
#define fast 	ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)

#define N 1000005

struct query
{
    ll l, r, id;
};

query  qr[N];
ll block=sqrt(N);
ll ans[N], sum, a[N], frec[N];


bool  cmp(query a, query b )
{
    if(a.l/ block  !=  b.l/block ) return  a.l/ block  <  b.l/block ;
    return a.r<b.r;
}

void add(ll x )
{
    sum-= frec[a[x] ]*frec[a[x] ]*a[x];
    frec[a[x] ]++;
    sum+= frec[a[x] ]*frec[a[x] ]*a[x];
}

void sub(ll x)
{
    sum-= frec[a[x] ]*frec[a[x] ]*a[x];
    frec[a[x] ]--;
    sum+= frec[a[x] ]*frec[a[x] ]*a[x];
}



int main()
{
    ll m,n,b,c,d,i,j,k,x,y,z, t;

    scl(n), scl(t);

    fr1(i,n)scl(a[i]);

    fr1(i, t)
    {
        scl(qr[i].l), scl(qr[i].r) ;
        qr[i].id=i;
    }

    sort(qr+1, qr+t+1 , cmp);
    ll currL=1 , currR=0;

    fr1(i, t)
    {
        ll l = qr[i].l;
        ll r = qr[i].r;

       while(currL < l)sub(currL++) ;

       while(currL > l) add(--currL);
       while(currR <r) add(++currR);

       while(currR >r)sub(currR--);

       ans[qr[i].id]=sum;
    }


    fr1(i, t)pfl(ans[i]);


return 0;
}

///Before submit=>
///    *check for integer overflow,array bounds
///    *check for n=1



