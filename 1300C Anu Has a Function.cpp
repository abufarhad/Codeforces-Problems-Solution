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
#define md                  1000000007
#define inf                 1e18
#define debug               cout<<"I am here"<<endl;
#define ps                  cout<<" ";
#define Pi                  acos(-1.0)
#define mem(a,i)            memset(a, i, sizeof(a))
#define tcas(i,t)           for(ll i=1;i<=t;i++)
#define pcas(i)             cout<<"Case "<<i<<": "<<"\n";
#define fast 	ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)


ll calc(ll x, ll y)
{
    return ( (x|y) -y );
}
#define N 100006
ll cnt[64];

int main()
{
    fast;
    ll t;

    ll m,n,b,c,d,i,j,k,x=-1,y,z,l,q,r;

    ll ans=0,sum=0, pos=0, id=0;
    scl(n);
    ll a[n];
    fr(i,n)
    {
        cin>>a[i];
        ll tmp=a[i];
        pos=0;
        while(tmp)
        {
            if(tmp%2) cnt[pos]++;
            cout<<a[i]<<" "<<pos<<" -- "<<cnt[pos]<<endl;
            pos++;
            tmp>>=1;
        }
    }

    ll mx=-1;

    fr(i, n)
    {
        ll tmp=a[i];
        pos=0;
        while(tmp)
        {
            if(tmp%2)
            {
                cout<<a[i]<<endl;
                if(cnt[pos]==1  and pos>mx)
                {

                    cout<<a[i]<< " "<<pos<<" "<<mx<<endl;
                    mx=pos;
                    id=i;
                }
            }
            pos++;
            tmp>>=1;
        }
    }


    cout<<a[id]<<" ";
    fr(i, n)
    {
        if(i==id)continue;
    cout<<a[i]<<" ";
    }



return 0;
}

///Before submit=>
///    *check for integer overflow,array bounds
///    *check for n=1




