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
#define inf                 1e6
#define pn                  cout<<endl;
#define fast 	ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)

#define N 5005

typedef pair<ll,ll> iPair;

vector<ll> grph[N];
vector< pair<ll, ll> >v;

ll par[N];
ll cost[N][N];


void dfs(ll src, ll pr)
{
    //for(auto it : grph[src])
    fr(i, grph[src].size())
    {
        ll it=grph[src][i];
       if( it !=pr )
       {
           par[it]=src;
           dfs(it, src);
       }
    }
}


int main()
{
    fast;
    ll t;
    ll m,n,b,c,d,i,j,k,x,y,z,l,q,r;
    cin>>n;

    ll cnt=0,ans=0,sum=0;


    fr(i,n-1)
    {
        cin>>x>>y;
        grph[x].pb(y);
        grph[y].pb(x);

        v.pb(make_pair(x, y));
    }


    vector<pair<ll, iPair > > vv;

     cin>>m;
     fr(i, m)
     {
         cin>>x>>y>>z;
         vv.pb(make_pair(z, make_pair(x, y) ));
     }


    sort(all(vv));

    fr(i, m)
    {
        c=vv[i].first;
        x=vv[i].second.first;
        y=vv[i].second.second;

        //cout<<ff <<" "<<fsf<<" "<<fss<<endl;

        par[x]=x;
        dfs(x, -1);


        while(x!=y)
        {

        cost [ par[y] ][y]=max(c, cost[par[y] ][y] );
        cost[y][par[y]]=cost[par[y] ][y];

        y=par[y];
        //cout<<x<<" - "<<y<<endl;
        }


    }

    /*=======*/

    fr1(i, n)
    {
        fr1(j, n)
        {
            if(cost[i][j])continue;
            cost[i][j]=inf;
        }
    }
      /*=======*/


      bool chk=0;

    fr(i, m)
    {
        c=vv[i].first;
        x=vv[i].second.first;
        y=vv[i].second.second;

        //cout<<ff <<" "<<fsf<<" "<<fss<<endl;

        par[x]=x;
        dfs(x, -1);

        ll mn=inf;

        while(x!=y)
        {
        mn=min(mn, cost[y][par[y] ] );
        y=par[y];
        }


        if(mn != c)chk=true;
    }

    if(chk)cout<<"-1"<<endl;
    else
    fr(i, n-1)
    {
        x=v[i].first;
        y=v[i].second;

        cout<<cost[x][y]<<" ";
    }
    pn;


return 0;
}

