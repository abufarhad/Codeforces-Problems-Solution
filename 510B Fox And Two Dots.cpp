//! Bismillahi-Rahamanirahim.
/** ========================================**
 ** @Author: Md. Abu Farhad ( RUET, CSE'15)
 ** @Category:
/** ========================================**/

#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;


#define ll                  long long
#define scl(n)              scanf("%lld", &n)
#define scc(c)	            scanf(" %c", &c);
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define pfl(x)              printf("%lld\n",x)
#define pb                  push_back
#define l(s)                s.size()
#define debug               printf("I am here\n")

ll dx[4]={1,-1, 0, 0};
ll dy[4]={0,0,1, -1};

#define N 100
char nd[100][100];
bool vis[N][N];
ll found=0, m,n;

void dfs( ll x, ll y, ll fromx, ll fromy, char needchar)
{
   if(x<0 || x>=n || y<0 || y>=m  )return;

   if(nd[x][y] !=needchar)return;

   if(vis[x][y]){ found=1; return ;}
   vis[x][y]=1;

    fr(i, 4)
    {
        ll tmpx=dx[i]+x;
        ll tmpy=dy[i]+y;
        if(tmpx==fromx and tmpy==fromy)continue;
        dfs(tmpx , tmpy, x, y, needchar);
    }
}



int main()
{
    ll t,b,c,d,i,j,k,x,y,z,l,q,r;

    scl(n), scl(m);

    fr(i,n)fr(j,m)cin>>nd[i][j];

    fr(i,n)fr(j,m)if(!vis[i][j])dfs(i, j, -1, -1, nd[i][j]);
    if(found)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

return 0;
}



