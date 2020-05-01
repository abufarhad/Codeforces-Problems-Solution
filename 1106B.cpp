
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

ll dis[N] , cost[N];
set<pr>st;

int main()
{
    fast;
    ll t;

    ll m,n,b,c,d,i,j,k,x,y,z,l,r;
    string s,s1, s2, s3, s4;

    ll cnt=0,ans=0,sum=0;
    cin>>n>>m;
    ll mn;

    fr1(i,n)cin>>dis[i];
    fr1(i,n)cin>>cost[i] , st.insert({cost[i] , i } );

    fr(i, m)
    {
        sum=0;
        ll id, num;
        cin>>id>>num;
        mn=min(dis[id] , num);

        sum+=mn*cost[id];
        num-=mn, dis[id]-=mn;

        while(num>0 and st.size()>0)
        {
            x=st.begin()->ss;

            mn=min(dis[x] ,  num);
            sum+=mn*cost[x];
            num-=mn, dis[x]-=mn;

            if(!dis[x] )st.erase( st.begin());
        }

        if(num )cout<<0<<endl;
        else cout<<sum<<endl;
    }

    //cout<<ans<<endl;


return 0;
}

///Before submit=>
///    *check for integer overflow,array bounds
///    *check for n=1




