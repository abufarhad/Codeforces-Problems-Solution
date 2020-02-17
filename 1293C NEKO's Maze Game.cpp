#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fr(i,n)             for (ll i=0;i<n;i++)
#define N 100005
bool  vis[3][N];

int main()
{
    ll n, q, i, j, k, x, y;
    cin>>n>>q;
    ll cnt=0;

    fr(i, q)
    {
        cin>>x>>y;

        if( vis[x][y])
        {
        if(vis[3-x][y-1])cnt++;
        if(vis[3-x][y])cnt++;
        if(vis[3-x][y+1])cnt++;

        vis[x][y]=false;
        }
        else
        {
        if(vis[3-x][y-1])cnt--;
        if(vis[3-x][y])cnt--;
        if(vis[3-x][y+1])cnt--;

        vis[x][y]=true;
        }

        if(cnt)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
}
