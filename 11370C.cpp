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


vector<ll>v, p_f;
ll find_all_divisor(ll n)
{
    fr1(i,sqrt(n))
    {
        ll x;
        if(n % i == 0)
        {
            x = n / i;
            if(i%2  and i>1) v.pb(i);
            if(i != x  and x%2  and x>1)  v.pb(x);
        }
    }

    if(v.size()) sort(all(v));
}


int main()
{

    ll t;
    cin>>t;
    tcas(cs, t)
    {
        ll m,n,b,c,d,i,j,k,x,y,z,l,r, p, q;

        ll cnt=0,cn=0,ans=0,sum=0 ;
        cin>>n;
        find_all_divisor(n);

        if(n==1)cout<<"FastestFinger"<<endl;
        else if(n%2 ) cout<<"Ashishgup"<<endl;
        else if(n>2 and n%2==0 )
        {
            cnt=0;

            if(v.size())
            {
                 n/=v[0 ];
                cnt++;
            }

            if(n-1> 1 )cnt++;
            if(cnt%2==0) cout<<"Ashishgup"<<endl;
            else  cout<<"FastestFinger"<<endl;
        }
        else  cout<<"Ashishgup"<<endl;

        v.clear();
    }

    return 0;
}

