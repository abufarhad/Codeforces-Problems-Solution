
#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;


#define ll                  long long
#define scl(n)              scanf("%lld", &n)
#define scc(c)	            scanf(" %c", &c);
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
#define uniquee(x)          x.erase(unique(x.begin(), x.end()),x.end())
#define pn                  printf("\n")
#define md                  10000007
#define inf                 1<<28
#define debug               printf("I am here\n")
#define ps                  printf(" ")
#define Pi                  acos(-1.0)
#define mem(a,i)            memset(a, i, sizeof(a))
#define tcas(i,t)           for(ll i=1;i<=t;i++)
#define pcas(i)             printf("Case %lld: ",i)
#define N 100006

int main()
{
    ll m,n,t,b,c,d,i,j,k,x,y,z,l,q,r,h;

    ll cnt=0;
    cin>>n>>m>>h;

    ll a[n][m],   hi[n][m];

    ll fnt[m], lft[n];
    ll ans[n][m];

    fr(i,m)cin>>fnt[i];
    fr(i,n)cin>>lft[i];
    //fr(i,n)fr(j,m) cin>>hi[i][j],  ans[i][j]= hi[i][j];

    fr(i,n)
    {
        fr(j,m)
        {
            cin>>x;
            if(x) cout<<min( fnt[j], lft[i]  )<<" ";
            else cout<<0<<" ";
        }
        pn;
    }
    return 0;
}

