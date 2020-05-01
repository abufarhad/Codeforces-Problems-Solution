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

#define N 100006

int main()
{
    fast;
    ll n, m;
    while(cin>>n>>m)
    {
    ll b,c,d,i,j,k,x,y,z,l,q,r;
    string s,s1, s2, s3, s4;
    ll cnt=0,ans=0,sum=0;

    while( m>0)
    {
        if(n>0 and  n*2<m ) s+="110" ,  n--, m-=2;
        else
        {
            //debug;
            if(m)s+="1", m--;
            if(n)s+="0", n--;
        }
    }

    if(n>0)s1+="0" , n--;
    s1+=s;

    //cout<<s<<endl;
    for(i=0; i<s.size()-2; i++)  if( s[i]==s[i+1]  and s[i]==s[i+2]    or (s[i]=='0' and s[i]==s[i+1] ) ){cnt=1;break;}

    if(n or m or cnt )cout<<-1<<endl;
    else cout<<s1<<endl;
    }

return 0;
}

///Before submit=>
///    *check for integer overflow,array bounds
///    *check for n=1



