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

#define conv_string(n)	to_string(n)
//ll x[10]= {0,-1,-1,1,1,-2,-2,2,2};
//ll y[10]= {0,-2,2,-2,2,-1,1,-1,1};



bool cmp(const pair<ll, ll> a, const pair<ll, ll> b)
{
    if(a.first==b.first )return a.second< b.second;
    else return a.first<b.first;
}


int main()
{
    fast;
    ll t;
    cin>>t;
    while(t--)
    {
    ll m,n,b,c,d,i,j,k,x,y,z,l,q,r;
    string s, s2, s3, s4;

    ll cnt=0,ans=0,sum=0;
    scl(n);

    vector<pair<ll, ll> > v;


    fr(i,n)cin>>x>>y, v.pb( make_pair( x, y));

    sort(all(v ), cmp);

//    fr(i, n)
//    {
//        cout<<v[i].first<<" "<<v[i].second<<endl;
//    }

    fr(i, v[0].first)s+='R';
    fr(i, v[0].second)s+='U';
    n--;
     ll mn=v[0].second;

     fr1(i,n )if(v[i].second >=mn )mn=v[i].second;else cnt=1;

     if(cnt==1)cout<<"NO"<<endl;
     else
     {

     fr1(i, n)
     {
         ll tm=v[i].first- v[i-1].first;

         fr(j, tm)s+='R';

         ll tmp= v[i].second- v[i-1].second;

         fr(j, tmp)s+='U';

     }
     cout<<"YES"<<endl;
     cout<<s<<endl;

    }
    }

return 0;
}

///Before submit=>
///    *check for integer overflow,array bounds
///    *check for n=1

