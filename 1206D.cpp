
// Not Mine \\

#include<bits/stdc++.h>
#define ll long long
#define mp make_pair
using namespace std;
const int mxn=100005;
bool use[mxn];
ll a[mxn],n,mn=2147483640,bg;
vector<int>v[mxn];
inline void dfs(int x,int par,int dis)
{
    if(mn==3)
    {
        cout<<3<<endl;
        exit(0);
    }
    if(dis>=mn)
        return;
    use[x]=1;
    for(int i:v[x])
    {
        if(i!=par and i!=x and dis+1<mn)
        {
            if(i==bg)
            {
                mn=dis+1;
                return;
            }
            else if(!use[i])
                dfs(i,x,dis+1);
        }
    }
    use[x]=0;
}
vector<int>tar[64];
int main()
{
    ios_base::sync_with_stdio(false);
//	freopen("o.txt","r",stdin);
//	freopen("o.out","w",stdout);
    cin>>n;
    for(int i=1; i<=n; ++i)
    {
        cin>>a[i];
        ll t=a[i],p=0;
        for(; t; t>>=1,++p)
            if(t&1)
                tar[p].push_back(i);
    }
    for(int i=1; i<=n; ++i)
        if(tar[i].size()>2)
        {
            cout<<3<<endl;
            return 0;
        }
    for(int i=1; i<=n; ++i)
    {
        ll t=a[i],p=0;
        for(; t; t>>=1,++p)
            if(t&1)
            {
                for(int j:tar[p])
                    v[i].push_back(j);
            }
    }
    for(int i=1; i<=n; ++i)
        bg=i,dfs(i,0,0);
    if(mn==2147483640)
        mn=-1;
    cout<<mn<<endl;
}
