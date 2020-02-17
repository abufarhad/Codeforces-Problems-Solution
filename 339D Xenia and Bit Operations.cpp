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
#define md                  10000007
#define inf                 1e18
#define debug               cout<<"Monti valo nei "<<endl;
#define ps                  cout<<" ";
#define Pi                  acos(-1.0)
#define mem(a,i)            memset(a, i, sizeof(a))
#define tcas(i,t)           for(ll i=1;i<=t;i++)
#define pcas(i)             cout<<"Case "<<i<<": "<<endl;
#define fast 	ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)

#define conv_string(n)	to_string(n)

#define N 100006
ll a[4*N],  nd[4*N], tree[4*N];

ll build(ll nd, ll l, ll r, ll chk)
{
    if(l==r){tree[nd]=a[l]; return 0; }

    ll left=2*nd;
    ll right=left+1;

    ll mid=(l+r)/2;



    build(left, l, mid, chk-1);
    build(right, mid+1, r, chk-1);


    if(chk%2)//cout<<nd<<" "<<left<<" "<<right<<" -- "<<tree[nd]<<" "<<tree[left]<<" "<<tree[right]<<" "<<chk<<" left "<<endl,
        tree[nd]=tree[left] | tree[right];
    else //cout<<nd<<" "<<left<<" "<<right<<" -- "<<tree[nd]<<" "<<tree[left]<<" "<<tree[right]<<" "<<chk<<" Right "<<endl,
        tree[nd]=tree[left] ^ tree[right];

    //cout<<"Chk "<<chk<<" "<<tree[nd]<<endl;

}

void update(ll nd, ll l, ll r, ll x, ll new_val, ll chk)
{
    if( l>x    or   r<x )return ;
    if(l==x and r==x){tree[nd]=new_val; return ;}

    ll left=2*nd;
    ll right=left+1;

    ll mid=(l+r)/2;

    update(left, l, mid, x, new_val, chk-1);
    update(right,  mid+1, r, x, new_val, chk-1);

    if(chk%2)tree[nd]=tree[left] | tree[right];
    else tree[nd]=tree[left] ^ tree[right];
}



int main()
{
    fast;
    ll t;
    ll m,n,b,c,d,i,j,k,x,y,z,l,q,r;

    ll cnt=0,ans=0,sum=0;
    cin>>n>>q;
    ll lim=1<<n;

    fr1(i, lim)cin>>a[i];
    //debug;
    build(1, 1, lim, n);
    while(q--)
    {
        cin>>x>>y;
        update(1, 1, lim, x, y, n);
        ans=tree[1];
        cout<<ans<<endl;
    }

return 0;
}
