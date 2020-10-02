
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


#define N 300006
vector<ll> v[N];
bool vis[N];
ll pr[N];
ll colour[N];

string str ;
ll ans[N][26];

void dfs1(ll s )
{
    colour[s]=1;
    for(auto  now : v[s])
    {
        if(colour[now]==1)
        {
            cout<<-1<<endl;
            exit(0);
        }
        else if(colour[now]==0) dfs1(now);
    }
    colour[s]=2;
}


void dfs2(ll s)
{
    vis[s]=1;
    for(auto now: v[s])
    {
        if(!vis[now])dfs2(now);

        //cout<<now<<endl;


        fr(i, 26) ans[s][i]=max(ans[s][i] , ans[now][i] ) ;//,cout<<now<<" "<<s<<" "<<i<<" "<<ans[s][i]<<" "<<endl;
    }

    //cout<<"s "<<s<<endl;
    ans[s][str[s-1]-'a' ]++;
}


int main()
{
    fast;
    ll t;

    ll m,n,b,c,d,i,j,k,x,y,z,l,q,r;
    ll cnt=0,sum=0;

    cin>>n>>m>>str;

    fr(i,m)
    {
        cin>>x>>y;
        v[x].pb(y);
    }

   fr1(i , n)  if(colour[i]==0)dfs1(i );
   fr1(i , n) if( vis[i] ==0) dfs2(i);


   ll mx=-1;
   fr1(i, n) fr(j, 26)mx=max(mx, ans[i][j] );

   cout<<mx<<endl;

return 0;
}

///Before submit=>
///    *check for integer overflow,array bounds
///    *check for n=1
