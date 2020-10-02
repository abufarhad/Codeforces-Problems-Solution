
/*

YAHA SE MAT CHAPNA BC. IIIT KA HU. COPYCASE AAYEGA.

*/

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;
#define rep(i,l,r) for(int i=l;i<r;i++)
#define rep2(i,r,l) for(int i=r;i>l;i--)
#define sz(a) (int)a.size()
#define mp(a,b) make_pair(a,b)
#define pb(a) push_back(a)
#define nl "\n"
#define pii pair<int,int>
const int c=2e5+5;
int strength[c],level[c],sizee[c],visited[c],tree_even[4*c],tree_odd[4*c],M;
std::vector<int> v[c],preorder;
map <int,int> Map;


ll st[c], ft[c], tim;

void dfs(int n,int p,int lev=0)
{
    st[n]=++tim;
    level[n]=lev;

    for(auto x:v[n])
    {
        if(x==p) continue;
        dfs(x,n,lev+1);
    }
    ft[n]=tim;
}

void update(int index,int s,int e,int l,int r,int val)
{
    if(e<l || s>r)   return;
    if(s>=l && e<=r)
    {
        if(M==0)   tree_even[index]+=val , cout<<"index  ev "<<index<<endl;
        else     tree_odd[index]+=val , cout<<"index  od "<<index<<endl;;
        return;
    }

    int mid=(s+e)/2;
    update(2*index,s,mid,l,r,val);
    update(2*index+1,mid+1,e,l,r,val);
    return;
}

int sum;
int query(int index,int l,int r,int i)
{
    if(i<l || i>r)     return 0;
    if(l<=i && i<=r)
    {
        if(M==0)       sum+= tree_even[index]-tree_odd[index];
        else     sum+= tree_odd[index]-tree_even[index];
    }

    if(l==r)    return 0;

    int mid=(l+r)/2;
    query(2*index,l,mid,i);
    query(2*index+1,mid+1,r,i);
    return 0;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL),cout.tie(NULL);

    int n,m,v1,v2,type,node,upd,start;
    cin>>n>>m;
    rep(i,1,n+1) cin>>strength[i];

    rep(i,0,n-1)
    {
        cin>>v1>>v2;
        v[v1].pb(v2);
        v[v2].pb(v1);
    }
    preorder.pb(0);
    dfs(1,0);

       cout<<endl;
//    for(ll i=0; i<preorder.size(); i++)cout<<preorder[i]<<" ";
       for(ll i=0; i<=n; i++)cout<<i<<" "<<st[i]<<" "<<ft[i]<<endl;//;
//    for(auto now : Map) cout<<now.first<<" "<<now.second<<endl;

    while(m--)
    {
        cin>>type;
        if(type==1)
        {
            cin>>node>>upd;
            M=level[node]%2;
            cout<<node<<" - "<<M<<endl;
            update(1,1,n,st[node],ft[node],upd);
            cout<<endl;
        }
        else
        {
            cin>>node;

            M=level[node]%2;
            sum=strength[node];

            query(1,1,n,st[node]);
            cout<<sum<<nl;
        }
    }
    return 0;
}
