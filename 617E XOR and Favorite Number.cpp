#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define scl(n)              scanf("%lld", &n)
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define pfl(x)              printf("%lld\n",x)
#define endl 	            "\n"
#define pb                  push_back
#define asort(a)            sort(a,a+n)
#define dsort(a)            sort(a,a+n,greater<int>())
#define vasort(v)         sort(v.begin(), v.end());
#define vdsort(v)         sort(v.begin(), v.end(),greater<int>());
#define pn                  printf("\n")
#define md                  10000007
#define debug               printf("I am here\n")
#define ps                  printf(" ")
#define l(s)                      s.size()
#define tcas(i,t)             for(ll i=1;i<=t;i++)
#define pcas(i)                printf("Case %lld: ",i)
ll Mx=1000007;
ll a[Mx], cumxor[Mx];
ll m,n,k,l,i,q,j;

struct query
{
    ll l,r,id;
}q[Mx];


void in_query()
{
    fr(i,q)
    {
        scl(q[i].l), scl(q[i].r);

    }
}
int main()
{

    cin>>n>>q>>k;
    fr1(i,n)scl(a[i]);

    fr1(i,n)cumxor[i]=cumxor[i-1]^a[i];

    in_query();

}
