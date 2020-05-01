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
#define pr                  pair<ll, ll>
#define ff                  first
#define ss                  second
#define mem(a,i)            memset(a, i, sizeof(a))
#define tcas(i,t)           for(ll i=1;i<=t;i++)
#define pcas(i)             cout<<"Case "<<i<<": "<<"\n";
#define fast 	ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)

map<ll, ll>mp;

int main()
{
    fast;

    ll m,n,b,c,d,i,j,k,x,y,z,l,q,r;

    ll cnt=0,ans=0,sum=0;
    cin>>n>>m;
    ll a[n][m];

    fr(i,n)fr(j, m)cin>>a[i][j];
    fr(i, n)ans^=a[i][0];


    if(ans==0  )
    {
        ll res=-1 , id=-1;
        fr(i, n)
        {
            for(j=1; j<m; j++)if(a[i][0] != a[i][j] ){res=i, id=j+1;break;}
        }

        if(id>0)
        {
            cout<<"TAK"<<endl;
            fr(i, n)
            {
                if(i==res )cout<<id<<" ";
                else cout<<1<<" ";
            }
        }
        else cout<<"NIE"<<endl;

    }
    else  {cout<<"TAK"<<endl ; fr(i, n) cout<<1<<" ";}


return 0;
}

///Before submit=>
///    *check for integer overflow,array bounds
///    *check for n=1




