//! Bismillahi-Rahamanirahim.
/** ========================================**
 ** @Author: Md. Abu Farhad ( RUET, CSE'15)
 ** @Category:
/** ========================================**/

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
#define inf                 1e18
#define ps                  cout<<" ";
#define Pi                  acos(-1.0)
#define pr                  pair<ll, ll>
#define ff                  first
#define ss                  second
#define mem(a,i)            memset(a, i, sizeof(a))
#define tcas(i,t)           for(ll i=1;i<=t;i++)
#define pcas(i)             cout<<"Case "<<i<<": "<<endl;
#define fast 	ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)


#define N 200006
ll coins[N];
map<ll, ll>mp;
ll pow2[N];

int main()
{
    //fast;

    ll m,n,b,c,d,i,j,k,x,y,z,l,q,r;
    string s,s1, s2, s3, s4;

    ll cnt=0,ans=0,sum=0;
    cin>>n>>q;
    ll a[n];

    pow2[0]=1, mp[1]=0;
    fr1(i, 56)  pow2[i]=pow2[i-1]*2 , mp[pow2[i] ]=i;

    fr(i, n)
    {
        cin>>x;
        coins[mp[x] ]++;
        //m=log2(x) ,coins[m ]++;
    }

    while(q--)
    {
        cin>>x;
        cnt=0;

        for(i=50; i>=0; i--)
        {
            if(pow2[i]> x   or coins[ i ]==0)continue;

            ll tmp=x/pow2[i];
            cnt+=min( tmp, coins[i] );

            x-=min(tmp, coins[i] ) *pow2[i];
            if(!x)break;
        }
        if(x)cout<<-1<<endl;
        else cout<<cnt<<endl;

    }

return 0;
}

///Before submit=>
///    *check for integer overflow,array bounds
///    *check for n=1



