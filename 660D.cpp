
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

bool cmp(pr a, pr b )
{
    if(a.ff==b.ff)return b.ss> a.ss;
    return a.ff> b.ff;
}


int main()
{
    ll m,n,b,c,d,i,j,k,x,y,z,l,q,r;
    string s,s1, s2, s3, s4;

    ll cnt=0,ans=0,sum=0;
    scl(n);
    pr a[n];

    fr(i,n)cin>>a[i].ff>>a[i].ss;

    sort(a, a+n);
    //sort(a, a+n, cmp);

    //fr(i, n)cout<<a[i].ff<<" "<<a[i].ss<<endl;

    map<pr, ll> mp;

    fr(i, n)
    {
        for(j=i+1 ; j<n; j++ )
        {
            x=a[i].ff-a[j].ff;
            y=a[i].ss-a[j].ss;

            ans+=mp[{x, y} ];
            mp[{x, y}]++;
        }
    }

   ans/=2;
   pfl(ans);

return 0;
}

///Before submit=>
///    *check for integer overflow,array bounds
///    *check for n=1



