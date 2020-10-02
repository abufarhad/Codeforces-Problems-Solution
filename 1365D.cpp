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
#define debug               cout<<"I am here"<<endl;
#define pno                 cout<<"NO"<<endl
#define pys                 cout<<"YES"<<endl
#define tcas(i,t)           for(ll i=1;i<=t;i++)

ll dx[]={0,0,-1,1};
ll dy[]={1,-1,0,0};

#define N 55
bool vis[N][N];
string  s[N];
ll n, m;

bool valid(ll i, ll j)
{
    if(i>=0  and i<n  and j>=0 and j<m )return 1;
    else return 0;
}

void dfs(ll l , ll r )
{
    vis[l][r]=1;

    fr(i, 4)
    {
        ll x=l+dx[i];
        ll y=r+dy[i];

        if(valid(x, y)  and !vis[x][y]  and s[x][y] !='#' )dfs(x, y);
    }
}


int main()
{
    ll t;
    cin>>t;
    tcas(cs, t)
    {
        ll b,c,d,i,j,k,x,y,z,l,r, p, q;

        ll cnt=0,cn=0,ans=0,sum=0 , bad=0;
        cin>>n>>m;

        fr(i, n)cin>>s[i];


        fr(i, n)
        {
            fr(j, m)
            {
               if(s[i][j]=='B')
                {
                    fr(k, 4)
                    {
                        x=i+dx[k];
                        y=j+dy[k];

                        if( valid(x, y )  )
                        {
                            if(s[x][y]=='G')
                            {
                                cnt=1;
                                break;
                            }
                            if(s[x][y] !='B') s[x][y]='#';
                        }
                    }
                }
            }
            if(cnt)break;
        }

        if(cnt){  pno; continue ;}

        cnt=0;

        if(s[n-1][m-1] !='#' )dfs(n-1 , m-1);
        fr(i, n)
        {
            fr(j, m)
            {
               if(s[i][j]=='G'  and !vis[i][j])cnt=1;
               vis[i][j]=0;
            }
        }

        if(!cnt)pys;
        else pno;

    }

return 0;
}

/// **************************Before submit****************************

///    ****Please check all base case output  and printing " YES or NO " ***
///    *check for integer overflow,array bounds
///    *check for n=1



