#include<bits/stdc++.h>
#include<stdio.h>
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
using namespace std;
#define ll                  long long
#define scl(n)              scanf("%lld",&n)
#define scll(n, m)              scanf("%lld%lld",&n, &m)
#define scc(c)	            scanf("%c",&c)
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define pfl(x)              printf("%lld\n",x)
#define pb                  push_back
#define pn                  printf("\n")
#define N 200006

vector<ll>v[N];
ll weight[N], tree_even[4*N] , tree_odd[4*N] , start_time[N], end_time[N] , level[N], value_at[N] , tim , pos , ans;
bool vis[N] ;

void dfs(ll s, ll lev)
{
    start_time[s]=++tim;
    level[s]=lev;
    //value_at[tim]=s;

    vis[s]=1;
    for(auto now : v[s])if(!vis[now])dfs(now, lev+1);

    end_time[s]=tim;
}



void update(ll node , ll st, ll en , ll lf , ll ri , ll val)
{
    if(en<lf  or st>ri )return ;
    if(st>=lf  and en<=ri )
    {
        if(pos==0) tree_even[node]+=val , tree_odd[node]-=val;
        else  tree_odd[node]+=val , tree_even[node]-=val;

        return;
    }

    ll mid=(st+en)/2;
    ll left=2*node , right=left+1;

    update(left , st , mid , lf, ri , val);
    update(right , mid+1 , en , lf, ri , val);

}

ll query(ll node , ll st, ll en , ll need)
{
    if(en<need  or st>need )return 0;
    if(st<=need && need<=en)
    {
        if(pos==0)ans+= tree_even[node];
        else ans+= tree_odd[node];
    }
    if(st==en)return 0;


    ll mid=(st+en)/2;
    ll left=2*node , right=left+1;

    query(left , st , mid , need ) ;
    query(right , mid+1 , en , need);
    return 0;
}


int main()
{
    ll m,n,b,c,d,i,j,k,x,y,z,l,q,r;
    ll cnt=0,cn=0,sum=0 ;
    scll(n, q);

    fr1(i,n)scl(weight[i]);

    fr(i, n-1)
    {
        scll(x, y);
        v[x].pb(y);
        v[y].pb(x);
    }

    dfs(1, 0);

    //fr1(i, n)cout<<i<<" "<<start_time[i]<<" "<<end_time[i]<<" "<<value_at[i]<<" "<<level[i]<<endl;


    while(q--)
    {
        ll typ, node, val;
        scl(typ);
        if(typ==1)
        {
            scll(node, val);
            pos=level[node]%2;
            //cout<<"Up "<<node<<" "<<start_time[node] <<" "<< end_time[node]<<endl;
            update(1, 1, n, start_time[node] , end_time[node] , val);
        }
        else
        {
            scl(node);
            pos=level[node]%2;
            ans=weight[node] ;
            ans+=query(1, 1, n, start_time[node]) ;
            pfl(ans);
        }
    }

return 0;
}

