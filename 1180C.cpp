//! Bismillahi-Rahamanirahim.
/** ========================================**
 ** @Author: Md. Abu Farhad ( RUET, CSE'15)
 ** @Category:
/** ========================================**/

#include<bits/stdc++.h>
#include<stdio.h>
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
using namespace std;


#define ll                  long long
#define scl(n)              scanf("%lld",&n)
#define scll(n, m)          scanf("%lld%lld",&n, &m)
#define scc(c)	            scanf("%c",&c)
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define pfl(x)              printf("%lld\n",x)
#define pb                  push_back
#define debug               cout<<"I am here"<<endl;
#define pno                 cout<<"NO"<<endl
#define pys                 cout<<"YES"<<endl
#define tcas(i,t)           for(ll i=1;i<=t;i++)
#define all(x) 	            (x).begin(), (x).end()
#define allrev(x)           (x).rbegin(),(x).rend()
#define pr                  pair<ll, ll>
#define ff                  first
#define ss                  second
#define pn                  printf("\n")

#define l(s)                s.size()
#define asort(a)            sort(a,a+n)
#define dsort(a)            sort(a,a+n,greater<int>())
#define uniquee(x)          x.erase(unique(x.begin(), x.end()),x.end())
#define el                  cout<<endl
#define md                  1000000007
#define inf                 1e18
#define ps                  cout<<" ";
#define Pai                 acos(-1.0)
#define mem(a,i)            memset(a, i, sizeof(a))
#define pcas(i)             cout<<"Case "<<i<<": "<<endl;
#define fast 	ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)

#define N 200006


int main()
{
    ll t;
    t=1;
    tcas(cs, t)
    {
        ll m,n,b,c,d,i,j,k,x,y,z,l,r, p, q;
        string s,s1, s2, s3, s4;

        ll cnt=0,cn=0,ans=0,sum=0 ;
        cin>>n>>q;

        ll a[n];

        ll mx=-1;

        vector<ll>v;
        fr(i,n)cin>>x , v.pb(x)  , mx=max(mx , x  );


        map<ll , pr> mp;
        i=1;
        while(1)
        {
           if(mx== v[0])break;

           //fr(i, v.size())cout<<v[i]<<" "; pn;

           mp[i ]={ v[0]  , v[1]  };
           x=v[0]  , y=v[1];

           if(x<y ) v.erase(v.begin() ) , v.pb(x ) ;
           else v.erase(v.begin()+1 ) , v.pb(y ) ;
           i++;
        }

        //fr(i, v.size())cout<<v[i]<<" "; pn;
        ll step=i;

       // pfl(step);

        ll sz=v.size();

        fr(i, q)
        {
            scl(x);
            if(x==step)cout<<v[0]<<" "<<v[1]<<endl;
            else if(x>step)
            {
                ans=(x-step )%(sz-1);
                cout<<v[0]<<" "<<v[ans+1]<<endl;
            }
            else cout<<mp[x].ff<<" "<<mp[x].ss<<endl;
        }
    }

return 0;
}

/// **************************Before submit****************************

///    ****Please check all base case output  and printing " YES or NO " ***
///    *check for integer overflow,array bounds
///    *check for n=1
