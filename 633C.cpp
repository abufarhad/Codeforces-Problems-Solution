#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;


#define ll                  long long
#define scl(n)              cin>>n;
#define scc(c)	            cin>>c;
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
#define pn                  cout<<endl;
#define md                  1000000007
#define inf                 1e18
#define ps                  cout<<" ";
#define Pi                  acos(-1.0)
#define pr                  pair<ll, ll>
#define ff                  first
#define ss                  second
#define mem(a,i)            memset(a, i, sizeof(a))
#define tcas(i,t)           for(ll i=1;i<=t;i++)
#define pcas(i)             cout<<"Case "<<i<<": "<<"\n";
#define fast 	ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)

#define conv_string(n)	to_string(n)
#define N 100006
ll seed=17;
map<ll, string> hsh;
ll seq[N];

void print_out(ll n)
{
    if(!n)return ;

    string t=hsh[seq[n] ];
    print_out(n-t.size());

    cout<<t<<" ";
}


int main()
{
    fast;
    ll t;

    ll m,n,b,c,d,i,j,k,x=0,y,z,l,q,r;
    string s,s1, s2, s3, s4;

    ll cnt=0,ans=0,sum=0;
    cin>>n>>s>>m;
    fr(i, m)
    {
        cin>>s1;
        x=0;
        fr(j, s1.size()) x=seed*x+tolower( s1[j] );
        hsh[x]=s1;
    }

    mem(seq, -1);
    seq[0]=0;

    fr(i, n)
    {
        x=0;
        for(j=i; j>=0 ; j--)
        {
            x=seed*x+s[j];
            if( seq[j] !=-1  and hsh.count( x )){seq[i+1]=x; break;}
        }
    }

    print_out(n);

return 0;
}

///Before submit=>
///    *check for integer overflow,array bounds
///    *check for n=1



