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
#define debug               cout<<"Monti valo nei "<<endl;
#define ps                  cout<<" ";
#define Pi                  acos(-1.0)
#define mem(a,i)            memset(a, i, sizeof(a))
#define tcas(i,t)           for(ll i=1;i<=t;i++)
#define pcas(i)             cout<<"Case "<<i<<": "<<endl;
#define fast 	ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)

#define conv_string(n)	to_string(n)
//ll x[10]= {0,-1,-1,1,1,-2,-2,2,2};

#define N 100006
ll m,n,cost[N];
vector<ll> g[3*N], g_transpose[3*N], connected[3*N];

void normal_dfs(ll src, bool visited[],  stack<ll> &st)
{
    visited[src]=true;
    //cout<<src<<" ";

    for(auto it: g[src])
    {
        if(!visited[it])
        {
            normal_dfs(it, visited, st);
        }
    }

    st.push(src);
}

void transpose_dfs(ll src, bool visited[], ll cnt)
{
    visited[src]=true ;

    //cout<<src<<" ";

    for(auto it : g_transpose[ src])
    {
        if(!visited[it])
        {
            transpose_dfs(it, visited, cnt);
        }
    }

    connected[cnt].pb(src);
}


ll kusaraju()
{
    stack<ll> st;

    bool visited[N];
    mem(visited, false);

    fr1(i,n)
    {
        if(!visited[i])
        {
            //cout<<"Normal_dfs"<<endl;
            normal_dfs(i, visited, st);
            //pn;
        }
    }

    mem(visited, false);

    ll cnt=0;
    while(!st.empty())
    {
        ll top=st.top();
        st.pop();

        if(!visited[top])
        {
            //cout<<"traspos_dfs"<<endl;
            transpose_dfs(top, visited, cnt);
            //pn;
            cnt++;
        }
    }

    //cout<<"Connected component "<<cnt<<endl;

    return cnt;
}

int main()
{
    fast;
    ll t;

    ll b,c,d,i,j,k,x,y,z,l,q,r;
    string s1, s2, s3, s4;

    ll cnt=0,ans=0,sum=0,num_of_way=1;

    cin>>n;

    fr1(i, n)cin>>cost[i];

    cin>>m;
    fr(i, m)
    {
        cin>>x>>y;
        g[x].pb(y);

        g_transpose[y].pb(x);
    }

    ll connected_comp=kusaraju();

    ///each comp we find out the ways and min cost
    fr(i, connected_comp)
    {
        ll mn=1e15;
        //cout<<"connected "<<endl;
        for(auto it: connected[i])  mn=min(mn, cost[it] );
        cnt=0;

        for(auto it: connected[i])  if(mn==cost[it])cnt++;

        num_of_way*=cnt;
        num_of_way%=md;

        sum+=mn;
    }

   cout<<sum<<" "<<num_of_way<<endl;


return 0;
}

///Before submit=>
///    *check for integer overflow,array bounds
///    *check for n=1


