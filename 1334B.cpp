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
#define pno                 cout<<"NO"<<"\n"
#define pys                 cout<<"YES"<<"\n"

#define l(s)                s.size()
#define asort(a)            sort(a,a+n)
#define all(x) 	            (x).begin(), (x).end()
#define dsort(a)            sort(a,a+n,greater<int>())
#define vasort(v)           sort(v.begin(), v.end());
#define vdsort(v)           sort(v.begin(), v.end(),greater<int>());
#define uniquee(x)          x.erase(unique(x.begin(), x.end()),x.end())
#define pn                  cout<<"\n"
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


#define N 100006

int main()
{
    fast;
    ll t;
    cin>>t;
    tcas(cs, t)
    {
    double n, m,b,c,d,i,j,k,x,y,z,l,q,r;

    string s,s1, s2, s3, s4;

    double cnt=0,ans=0,sum=0;
    cin>>n>>k;
    vector<double>v , v1;

    for(i=0; i<n; i++)  {cin>>x; v1.pb(x); sum+=x; } //  if(x>k )sum+=x ,  v.pb(x ) , cnt++ ; }

    sort(all(v1));
    //reverse(all(v1));
    cnt=n;

    fr(i, n)
    {
        double avg=sum/cnt;
        if(avg< k )sum-=v1[i] , cnt--;
    }
    cout<<cnt<<endl;

    }

return 0;
}

///Before submit=>
///    *check for integer overflow,array bounds
///    *check for n=1




