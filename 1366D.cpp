
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
#define mem(a,i)            memset(a, i, sizeof(a))
#define pcas(i)             cout<<"Case "<<i<<": "<<endl;
#define fast 	ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)

#define N 10000006
ll factor[N];
vector<ll>prime;

void p_factor()
{
    ll i , j;
    for(i=2; i<=N; i++)
    {
        if(!factor[i])
        {
            for(j=i; j<=N; j+=i)factor[j]=i;
        }
    }
}

ll div1[N] , div2[N];
int main()
{
    ll m,n,b,c,d,i,j,k,x,y,z,l,r, p, q;

    p_factor();
    //fr(i, 20)cout<<prime[i]<<" "; pn;
    set<ll>s;
    vector<pr>v ;
    vector<ll>vv;

    ll cnt=0,cn=0,ans=0,sum=0 ;
    cin>>n;
    ll a[n];
    fr(i,n)cin>>a[i] , s.insert(a[i] );

    for(auto it :s)vv.pb(it);

    fr(i, vv.size())
    {
        ll val=vv[i], num=vv[i];

        ll tmp=factor[val ];
        while(val %tmp==0)val/=tmp;

        if(val>1 )div1[ num]=tmp , div2[ num]=val ;
        else div1[ num]=-1 , div2[ num]=-1 ;

    }


    fr(i, n)cout<<div1[a[i] ]<<" ";pn;
    fr(i, n)cout<<div2[a[i] ]<<" ";pn;

return 0;
}

/// **************************Before submit****************************

///    ****Please check all base case output  and printing " YES or NO " ***
///    *check for integer overflow,array bounds
///    *check for n=1



