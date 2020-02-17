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

map<ll, bool> chk;
ll a[105];
ll dp[101][101][101][3];
ll n;

ll solve(ll pos, ll od, ll ev, ll prev)
{
    if(pos> n)return 0;
    if(dp[pos][od][ev][prev] !=-1 )return dp[pos][od][ev][prev];

    ll p=1e18, q=1e18, cost=0;


    if(a[pos]!=0 )
    {
        cost=abs(a[pos]-prev )%2;
        if(pos==1)cost=0;
        return dp[pos][od][ev][prev]=cost+ solve(pos+1, od, ev, a[pos]%2);
    }

    if(od)
    {
        cost=abs(prev-1 )%2;
        if(pos==1)cost=0;
        p=cost+ solve(pos+1, od-1, ev, 1 );
    }

    if(ev)
    {
        cost=abs(prev )%2;
        if(pos==1)cost=0;
        q=cost+ solve(pos+1, od, ev-1, 0 );
    }

    return dp[pos][od][ev][prev]=min(p, q);
}

int main()
{
    ll i,j;
    cin>>n;
    mem(dp, -1);

    fr1(i, n)
    {
        cin>>a[i];
        chk[ a[i] ]=true;
    }

    ll od=0, ev=0;

    fr1(i, n)
    {
        if(chk[i]==true )continue;
        if(i%2)od++; else ev++;
    }

    ll ans=solve(1, od, ev, 0);
    pfl(ans);

}

///Before submit=>
///    *check for integer overflow,array bounds
///    *check for n=1


