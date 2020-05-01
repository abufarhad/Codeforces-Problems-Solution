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

int main()
{
    fast;
    ll t;
    ll m,n,b,c,d,i,j,k,x,y,z,l,q,r;
    while(cin>>r>>c>>x)
    {
    ll l=1, h=r*c, mid=0, ans=-1;

    while(l<=h)
    {
        mid=(l+h)/2;
        ll cnt=0;
        fr1(i, r)  cnt+=min(c, (mid-1)/i );

        //cout<<l<<" "<<h<<" "<<mid<<endl;

        if(cnt<x)
        {
            ans=max(ans, mid);
            l=mid+1;
        }
        else h=mid-1;
    }

    cout<<ans<<endl;
    }

return 0;
}

/*

    i|                  | elements < x    |
    1|1 2 3  4  5  6 ...|(x-1)/1       |
    2|2 4 6  8 10 12 ...|(x-1)/2     |
    3|3 6 9 12 15 18 ...|(x-1)/3    |
    . . .

    Let f(x) the number of elements on the multiplication table that are less than x.
    f can be compute by iterating each row and check how many numbers are less than x,
    that is (x-1)/i, but you have to remember that you only have m columns,
    so you take min(m,(x-1)/i). With binary search we want to find largest x so that f(x) < k.
*/

///Before submit=>
///    *check for integer overflow,array bounds
///    *check for n=1



