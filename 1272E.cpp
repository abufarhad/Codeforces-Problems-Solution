
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
#define all(x) 	            (x).begin(), (x).end()
#define pr                  pair<ll, ll>
#define ff                  first
#define ss                  second

#define l(s)                s.size()
#define asort(a)            sort(a,a+n)
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
#define mem(a,i)            memset(a, i, sizeof(a))
#define pcas(i)             cout<<"Case "<<i<<": "<<endl;
#define fast 	ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)

#define conv_string(n)	to_string(n)

#define N 200006
vector<ll>v[N];

int main()
{
    ll m,n,b,c,d,i,j,k,x,y,z,l,r, p;
    ll cnt=0,cn=0,sum=0 ;
    cin>>n;

    ll a[n] , ans[N];
    mem(ans, -1);

    fr1(i, n)cin>>a[i] ;
    queue<ll>q;
    fr1(i, n)
    {
        x=i+a[i];
        y=i-a[i];

        if(y>=1)
        {
            v[y].pb(i);
            if(a[i]%2 != a[y]%2 )ans[i]=1;
        }
        if(x<=n)
        {
            v[x].pb(i);
            if(a[i]%2 != a[x]%2 )ans[i]=1;
        }

        if(ans[i]==1)q.push(i);
    }

    //cout<<q.size()<<endl;

    while(!q.empty())
    {
        ll fnt=q.front();
        q.pop();

        for(auto i: v[fnt])
        {
            if(ans[i]==-1 and  a[i]%2== a[fnt]%2 )
            {
                ans[i]=ans[fnt]+1  ;
                q.push(i);
            }
        }
    }

    fr1(i,n )cout<<ans[i]<<" ";pn;


return 0;
}

/// **************************Before submit****************************

///    ****Please check all base case output  and printing " YES or NO " ***
///    *check for integer overflow,array bounds
///    *check for n=1


