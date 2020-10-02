#include<bits/stdc++.h>
#include<stdio.h>
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
using namespace std;


#define ll                  long long
#define scl(n)              scanf("%lld",&n)
#define scll(n, m)          scanf("%lld%lld",&n, &m)
#define scc(c)	            scanf("%c",&c)
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define pfl(x)              printf("%lld\n",x)
#define pb                  push_back
#define debug               cout<<"I am here"<<endl;
#define pno                 cout<<"NO"<<endl
#define pys                 cout<<"YES"<<endl
#define tcas(i,t)           for(ll i=1;i<=t;i++)
#define all(x) 	            (x).begin(), (x).end()
#define allrev(x)           (x).rbegin(),(x).rend()
#define pr                  pair<ll, ll>
#define ff                  first
#define ss                  second
#define pn                  printf("\n")

#define l(s)                s.size()
#define asort(a)            sort(a,a+n)
#define dsort(a)            sort(a,a+n,greater<int>())
#define uniquee(x)          x.erase(unique(x.begin(), x.end()),x.end())
#define el                  cout<<endl
#define md                  1000000007
#define inf                 1e18
#define ps                  cout<<" ";
#define Pai                 acos(-1.0)
#define mem(a,i)            memset(a, i, sizeof(a))
#define pcas(i)             cout<<"Case "<<i<<": "<<endl;
#define fast 	ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)

ll solve( vector <ll > &v )
{
    ll ans=0  , l_mx=-inf , g_mx=-inf;

    fr( i , v.size())
    {
        l_mx=max(v[i]  , v[i]+l_mx );
        g_mx=max(g_mx  , l_mx );
    }

    return g_mx;
}


int main()
{
    ll t;
    cin>>t;
    tcas(cs, t)
    {
        ll m,n,b,c,d,i,j,k,x,y,z,l,r, p, q;
        string s,s1, s2, s3, s4;

        ll cnt=0,cn=0,ans=0,sum=0 ;
        cin>>n;

        ll a[n];

        fr(i,n)
        {
            cin>>a[i];
            if(i%2==0)ans+=a[i];
        }

        vector<ll>od , ev;

        for(i=0; i+1<n; i+=2 ) ev.pb( a[i+1] -  a[ i ]   );
        for(i=1; i+1<n; i+=2)od.pb( a[i] -  a[i+1]  );

        //fr(i , ev.size())cout<<ev[i]<<" ";pn;
        //fr(i , od.size())cout<<od[i]<<" ";pn;

        x=solve( od ) , y= solve( ev);

        ans+=max(  { 0ll ,  x  , y  } );

        cout<<ans;pn;
    }

return 0;
}

