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
#define debug               cout<<"I am here"<<endl;
#define ps                  cout<<" ";
#define Pi                  acos(-1.0)
#define mem(a,i)            memset(a, i, sizeof(a))
#define tcas(i,t)           for(ll i=1;i<=t;i++)
#define pcas(i)             cout<<"Case "<<i<<": "<<"\n";
#define fast 	ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
string s;
map< pair<ll, ll> , ll> mp;
int main()
{
    fast;
    ll t;
    cin>>t;
    tcas(cs, t)
    {
    ll m,n,b,c,d,i,j,k,x,y,z,l,q,r;


    ll cnt=0,sum=0, cn=0;
    scl(n);
    cin>>s;

    ll sz=l(s);
    ll ansl, ansr, ans;
    ansl=0, ansr=n;

    mp[{0, 0} ]=1;

    for(i=2;i<=sz+1;i++)
    {
        if(s[i-2]=='L')cnt++;
        if(s[i-2]=='R')cnt--;
        if(s[i-2]=='U')cn++;
        if(s[i-2]=='D')cn--;

        ll tmp=mp[ { cnt, cn} ];
        if( tmp !=0  and  i-tmp<(ansr-ansl+1) )
        {
            //debug;
            ansl=tmp+1;
            ansr=i;
        }
        mp[ { cnt, cn} ]=i;

    }

    if(ansl)cout<<ansl-1<<" "<<ansr-1<<endl;
    else cout<<-1<<endl;

    mp.clear();
    }
return 0;
}


