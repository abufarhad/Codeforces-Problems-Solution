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


#define N 200006

int main()
{

    ll t;
    cin>>t;
    tcas(cs, t)
    {
    ll m,n,b,c,d,i,j,k,x,y,z,l,q,r;
    string s,s1, s2, s3, s4;

    ll cnt=0,ans=-1,sum=0 ;
    cin>>n>>k;
    ll a[n+5];

    ll cmsm[N] ;
    mem(cmsm , 0);


    fr1(i,n)cin>>a[i];
    for(i=2; i<=n-1; i++  ) if(a[i-1] < a[i]   and  a[i]> a[i+1]  ) cmsm[i]=1 ;

    fr1(i, n)cmsm[i]+=cmsm[i-1];


    fr1(i, n-k+1)
    {
        if(cmsm[i+k-2]-cmsm[i] > ans  )
        {
            ans=cmsm[i+k-2]-cmsm[i] ;
            x=i;
        }
    }

    cout<<ans+1<<" "<<x<<endl;

    }

return 0;
}

///Before submit=>
///    *check for integer overflow,array bounds
///    *check for n=1



