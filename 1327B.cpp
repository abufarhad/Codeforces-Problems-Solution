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
#define mem(a,i)            memset(a, i, sizeof(a))
#define tcas(i,t)           for(ll i=1;i<=t;i++)
#define pcas(i)             cout<<"Case "<<i<<": "<<"\n";
#define fast 	ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)

#define N 100006
map<ll, ll> mp;
vector<ll> v , v1 , v2 , vv;
int main()
{
    fast;
    ll t;
    cin>>t;
    tcas(cs, t)
    {
    ll m,n,b,c,d,i,j,k,x,y,z,l,q,r;
    string s,s1, s2, s3, s4;

    ll cnt=0,ans=0,sum=0;
    scl(n);
    ll a[n];


    fr(i,n)
    {
        cin>>k;
        fr(j, k)
        {
            cin>>x;
            vv.pb(x);
        }

        sort(all(vv));
        bool ok=0;
        fr(j, vv.size())
        {
            x=vv[j];
            if(mp[x]!=1 )mp[x]=1 , cnt++ , ok=1;

            if(ok==1)break;
        }
        if(!ok)v.pb(i+1);

        vv.clear();

    }

    //cout<<cnt<<" --  "<<n<<endl;

    if(cnt !=n)
    {
        cout<<"IMPROVE"<<endl;
        cout<<v[0]<<" ";
        fr1(i, n)if(mp[i] ==0){cout<<i<<endl; break;}
    }
    else cout<<"OPTIMAL"<<endl;

    mp.clear();
    v.clear();
    v1.clear();
    v2.clear();
    }

return 0;
}

///Before submit=>
///    *check for integer overflow,array bounds
///    *check for n=1




