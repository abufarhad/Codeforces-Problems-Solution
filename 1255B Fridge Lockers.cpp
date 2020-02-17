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
#define md                  10000007
#define debug               cout<<"I am here"<<endl;


int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll m,n,b,c,d,i,j,k,x,y,z,l,q,r,p;
        cin>>x>>y;
        ll a[x+1];
        fr(i,x)cin>>a[i];
        vector<pair<ll,ll> > v,f;
        ll mn=1e18, ans=0,sz;

        fr(i,x)
        {
            fr(j,x)
            {
                if(i !=j)
                {
                    d=abs(a[i]- a[j]) ;
                    if(mn>d )
                        mn=d, v.pb(make_pair(i+1, j+1));
                }
            }
        }

        vasort(v)
        ll minn=1e18;

        fr(i,v.size())
        {
            d=a[ v[i].first -1 ]   + a[v[i].second  -1  ];
            //cout<<" d "<<d<<" "<<i <<endl;
            if( minn>d  )
                minn=d, p=v[i].first, q=v[i].second;
        }

        //cout<<"mn "<<mn<<endl;

        if(x>2  and x<=y)
        {
            d=y-x;

            //cout<<"d "<<d<<endl;

            fr(i,x-1)
            {
                // debug;
                f.pb(make_pair(i+1, i+2));
                ans+=a[i]+a[i+1];
            }
            f.pb(make_pair(x, 1));
            ans+=a[0]+a[x-1];


            while(d)
            {
                f.pb(make_pair(p, q ));
                d--;
                ans+=a[ p -1 ]   + a[q  -1  ];
            }

            sz=f.size() ;
        }
        else
        {
            ans=-1,  sz=0;
        }

        //debug;

        cout<<ans<<endl;
        fr(i, sz)  cout<<f[i].first<<" "<<f[i].second<<endl;


    }

    return 0;
}
