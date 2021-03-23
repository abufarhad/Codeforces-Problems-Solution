
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
#define N 200006

ll n, k;
pair<ll, ll>v[N];


void solve(ll l, ll r )
{
    if(l>r)return;

    ll mid=(l+r)/2;

//     v[mid].ff=l-r;
//     v[mid].ss=mid;

     v[mid]={l-r , mid };

    //cout<<l<<" "<<r<<" "<<mid<<endl;

    solve(l, mid-1  );
    solve(mid+1, r );
}


int main()
{
    ll t;
    cin>>t;
    tcas(cs, t)
    {
        ll m,b,c,d,i,j,x,y,l,q,r;

        ll cnt=0,cn=0,ans=0,sum=0 ;
        cin>>n;

        solve(1, n);

        //for(auto id:v)cout<<id.ff<<" "<<id.ss<<endl;

        //fr1(i , n)cout<<v[i].ff<<" "<<v[i].ss<<endl;

        sort(v+1, v+n+1);

        pn;
        //fr1(i , n)cout<<v[i].ff<<" "<<v[i].ss<<endl;

        ll a[n];
        fr1(i, n)a[v[i].ss ]=i;
        fr1(i, n)cout<<a[i]<<" "; pn;

    }

return 0;
}

/// **************************Before submit****************************

///    ****Please check all base case output  and printing " YES or NO " ***
///    *check for integer overflow,array bounds
///    *check for n=1




