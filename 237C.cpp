//! Bismillahi-Rahamanirahim.
/** ========================================**
 ** @Author: Md. Abu Farhad ( RUET, CSE'15)
 ** @Category:
/** ========================================**/

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



#define N 100006
bool isprime[N];
vector<ll>prime;

void sieve()
{
    ll i, j;
    isprime[1]=1;
    for(i=4; i<=N; i+=2)isprime[i]=1;
    for(i=3; i*i<=N; i++)
    {
        if( ! isprime[i] )
        {
            for(j=i*i ; j<=N ; j+=i)isprime[j]=1;
        }
    }

    //prime.pb(2);
    //fr1(i, N)if(! isprime[i] )prime.pb(i);
}

int main()
{
    fast;
    ll t;
    sieve();
    ll m,n,b,c,d,i,j,k,x,y,z,l,q,r;
    string s,s1, s2, s3, s4;

    //fr(i, 20)cout<<prime[i]<<" "; pn;


    ll cnt=0,ans=0,sum=0;

    cin>>x>>y>>k;

    for(i=x; i<=y; i++)
    {
        if(!isprime[i]  and k>0 )ans=i, cout<<i<<" ",  k--;
        //if(k==0)ans=i;
    }
    if(k)ans=-1;
    cout<<ans<<endl;


return 0;
}

///Before submit=>
///    *check for integer overflow,array bounds
///    *check for n=1




