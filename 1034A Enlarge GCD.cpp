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
#define l(s)                s.size()
#define asort(a)            sort(a,a+n)
#define all(x) 	            (x).begin(), (x).end()
#define dsort(a)            sort(a,a+n,greater<int>())
#define vasort(v)           sort(v.begin(), v.end());
#define vdsort(v)           sort(v.begin(), v.end(),greater<int>());
#define uniquee(x)          x.erase(unique(x.begin(), x.end()),x.end())
#define pn                  cout<<endl;
#define md                  10000007
#define inf                 1e18
#define debug               cout<<"Monti valo nei "<<endl;
#define ps                  cout<<" ";
#define Pi                  acos(-1.0)
#define mem(a,i)            memset(a, i, sizeof(a))
#define tcas(i,t)           for(ll i=1;i<=t;i++)
#define pcas(i)             cout<<"Case "<<i<<": "<<"\n";
#define fast 	ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)

#define N 15000005
#define MAX sqrt(10000000)+1

vector<ll> primes;
bool isPrime[10000001];
void sieve()
{
    for (ll i = 0; i < MAX; ++i) isPrime[i] = true;

    for (ll i = 3; i * i <= MAX; i += 2)
    {
        if (isPrime[i])
        {
            for (ll j = i * i; j <= MAX; j += i)
            {
                isPrime[j] = false;
            }
        }
    }
    primes.push_back(2);
    for (ll i = 3; i < MAX; i += 2)  if (isPrime[i]) primes.push_back(i);
}

ll cnt[N+1];
ll a[N+1];

int main()
{
    fast;
    sieve();
    //cout<<primes.size()<<endl;
   // fr(i, 20)cout<<primes[i]<<" ";

    //pn;

    ll t;
    ll m,n,b,d,i,j,k,x,y,z,l,q,r;

    scl(n);

    fr(i,n)cin>>a[i];
    ll gcd=a[0];
    fr1(i, n-1)gcd=__gcd(gcd, a[i]);

    fr(i, n)a[i]/=gcd;
   // fr(i, n)cout<<a[i]<<" "; pn;

    fr(i, n)
    {
        ll p=a[i];

        fr(j, primes.size())
        {
            ll c=0;
            while(p%primes[j]==0)
            {
                c++;
                p/=primes[j];
            }

            if(c)cnt[primes[j] ]++;//, cout<<c<<" "<<primes[j]<<endl;;
        }
        if(p>1)cnt[p ]++;
    }

    ll ans=0;

    fr(i, N+1)
    {
        ans=max(ans, cnt[i]);
    }

    if(ans==0)cout<<-1<<endl;
    else cout<<n-ans<<"\n";

return 0;
}

