//! Bismillahi-Rahamanirahim.
/** ========================================**
 ** @Author: Md. Abu Farhad ( RUET, CSE'15)
 ** @Category:
/** ========================================**/

                        /**  INCOMPLETE **/

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
#define mem(a,i)            memset(a, i, sizeof(a))
#define tcas(i,t)           for(ll i=1;i<=t;i++)
#define pcas(i)             cout<<"Case "<<i<<": "<<"\n";
#define fast 	ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)


#define N 100006

int main()
{
    fast;
    ll t;
    ll m,n,b,c,d,i,j,k,x,y,z,l,q,r;
    string s,s1, s2, s3, s4;

    ll cnt=0,ans=0,sum=0;
    cin>>n;
    typedef pair<ll,ll> iPair;
    vector< iPair > v , v1 , v2 ;
    map<ll, ll> mp, mpp;

     fr(i, n)
     {
         cin>>x>>y;
         v.pb({y , x});
         mp[i+1]=x;
     }

    sort(all(v));
    reverse(all(v));

    //fr(i, n)cout<<v[i].first<<" "<<v[i].second<<endl;

    pn;
    vector<ll>vv;

    cin>>m;
    fr(i, m)
    {
        cin>>x;
        v1.pb({ x , i+1});
        vv.pb(x);
    }
    sort(all(vv));

    fr(i, n)
    {
        ll ss=v[i].second;
        ll id=lower_bound(vv.begin() , vv.end() , ss)-vv.begin();

        ll indx=v1[i].second;
        if(id<n  and v2.size()<m )v2.pb({indx, id+1}) , sum+=v[i].first , vv.erase(vv.begin()+id);
    }

    cout<<v2.size()<<" "<<sum<<endl;
    fr(i, v2.size())cout<<v2[i].first<< " "<<v2[i].second<<endl;


return 0;
}

///Before submit=>
///    *check for integer overflow,array bounds
///    *check for n=1




