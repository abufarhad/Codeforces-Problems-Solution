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
#define debug               cout<<"I am here"<<"\n";
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



int main()
{
    fast;

    ll m,n,c,d,i,j,k,x,y,z,l,q,r ;
    string s,s1, s2, s3, s4;

    ll cnt=0,ans=0,sum=0;
    cin>>n>>k;
    ll a[n] , t[n] , b[n];

    fr(i,n)cin>>a[i];
    fr(i, n)cin>>t[i] ;

    fr(i, n)if(t[i]==0 )b[i]=a[i]; else b[i]=0;

    ll cm[n+5];
    mem(cm, 0);

    fr1(i, n) cm[i]=cm[i-1]+b[i-1];

    //fr1(i, n)cout<<cm[i]<<" "; pn;

    ll mx=-1;

    fr(i, n)
    {
        l=i+1 , r=i+k;
        if(r>n)r=n;

        ll tmp=cm[r]-cm[l-1];

        if(tmp > mx)
        {
            x=i;
            mx=tmp;
        }
    }

    fr(i, n) if(t[i] )sum+=a[i];

    //cout<<x<<endl;

    for(i=x; i<n; i++)
    {
        if(t[i] ==0 )sum+=a[i] ;
        cnt++;
        if(cnt==k)break;
    }

    cout<<sum;pn;

return 0;
}

///Before submit=>
///    *check for integer overflow,array bounds
///    *check for n=1




