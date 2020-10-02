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

vector<ll>v;
ll find_all_divisor(ll n)
{
    fr1(i,sqrt(n))
    {
        ll x;
        if(n % i == 0)
        {
            x = n / i;
            v.pb(i);
            if(i != x)
                v.pb(x);
        }
    }
}

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll m,n,b,c,d,i,j,k,x,y,z,l,r, p, q;
        string s,s1, s2, s3, s4;

        cin>>n;

        if(n%2)
        {
            if(n==3)
                cout<<1<<" "<<2<<endl;
            else
            {
                find_all_divisor(n);
                sort(allrev(v));
                ll mn=n-1;
                vector<pr>vv;
                vv.pb({1, n-1});
                fr1(i, v.size()-1)
                {
                    x=v[i], y=n-x;
                    //cout<<x<<" "<<y<<endl;
                    ll tmp= (x*y)/__gcd(x, y);
                    if(mn > tmp )
                        mn= tmp, vv.pb({x, y});
                }
                cout<<vv[ vv.size()-1  ].ff<<" "<<vv[ vv.size()-1  ].ss<<endl;
                vv.clear();
                v.clear();
            }
        }
        else
            cout<<n/2<<" "<<n/2<<endl;
    }
    return 0;
}

/// **************************Before submit****************************

///    ****Please check all base case output  and printing " YES or NO " ***
///    *check for integer overflow,array bounds
///    *check for n=1



