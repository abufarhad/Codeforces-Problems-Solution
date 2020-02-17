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

#define N 200006
ll a[N];
ll op[N], l[N], r[N];

int main()
{
    fast;
    ll t;
    ll m,n,b,c,d,i,j,k,x,y,z,q;

    ll cnt=0,ans=0,sum=0;
    cin>>n>>q>>m;


    fr1(i, n)cin>>a[i];

    fr1(i, q) cin>>op[i]>>l[i]>>r[i];

    ///In case m only 100 we can go in reverse way

    fr1(i, m)
    {
        cin>>x;

        for(j=q;  j>=1; j--)
        {
            if(l[j]<=x and r[j]>=x )
            {
                if(op[j]==2)x=l[j]+r[j]-x; ///reverse er ninja technique
                else
                {
                    if(x==l[j])x=r[j];     ///Rotate er ninja
                    else x--;             ///Ulta dike jawar jonno (--)
                }
            }
        }

        cout<<a[x]<<" ";
    }
    pn;

return 0;
}

///Before submit=>
///    *check for integer overflow,array bounds
///    *check for n=1
