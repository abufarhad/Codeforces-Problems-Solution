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

#define conv_string(n)	to_string(n)

ll vis[1000];


int main()
{
    fast;
    ll t;
    cin>>t;
    tcas(cs, t)
    {
    ll m,n,b,c,d,i,j,k,x,y,z,l,q,r;

    ll cnt=0,ans=0,sum=0;
    cin>>n>>k;

    ll a[n];

    map<ll, ll> mp;

    fr(i,n){cin>>a[i]; mp[a[i] ]++;}
    fr(i, n)if(a[i]!=0 and  mp[a[i] ]>1 ){  cnt=1;}

    mem(vis, 0);
    if(!cnt)
    {
        fr(i, n)
        {
            ll num=a[i];
            c=0;
            while(num)
            {
                r=num%k;
                cout<<num<<" rem = "<<r<<endl;
                if(r>1){cnt=1;break;}
                if(r)
                {
                    vis[c]++;
                    if(vis[c]>1){ cnt=1 ; break; }
                }
                c++;
                num/=k;
            }
        }

        if(!cnt)pys;
        else pno;
    }
    else pno;



}
return 0;
}

///Before submit=>
///    *check for integer overflow,array bounds
///    *check for n=1




