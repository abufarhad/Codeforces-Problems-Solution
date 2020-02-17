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
#define scc(c)              cin>>c;
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define pfl(x)              printf("%lld\n",x)
#define pb                  push_back
#define l(s)                s.size()
#define asort(a)            sort(a,a+n)
#define all(x)              (x).begin(), (x).end()
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
#define pcas(i)             cout<<"Case "<<i<<":"<<endl;
#define fast    ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)

#define conv_string(n)  to_string(n)
#define N 150006


struct store
{
    ll indx, value, sum;
};
store tree[4*N];
ll n;

void update(ll nd, ll l, ll r, ll id, ll val, ll vis  )
{
    if(l==r)
    {
        tree[nd].indx=id;
        tree[nd].value=val;
        tree[nd].sum=vis;
        return;
    }

    ll left=2*nd;
    ll right=left+1;

    ll mid=(l+r)/2;

    if(id<=mid)  update(left, l, mid, id, val, vis);
    else update(right, mid+1, r, id, val, vis);

    tree[nd].sum=tree[left].sum+tree[right].sum;
}


ll query(ll nd, ll l, ll r, ll id)
{
    tree[nd].sum--;
    if(l==r)return tree[nd].value;

    ll left=2*nd;
    ll right=left+1;

    ll mid=(l+r)/2;

    if(id<= tree[left].sum) return query(left,  l, mid,  id);
    else return query(right,   mid+1, r , id-tree[left].sum);
}

int main()
{
    fast;
    ll t;
    scl(t);
    tcas(cs, t)
    {
        ll m,val, q;
        cin>>n>>q;

        ll limit=n+q;

        fr1(i, n)
        {
            cin>>val;
            update(1, 1, limit, i, val, 1);
        }

        pcas(cs);
        fr(i, q)
        {
            char c;
            cin>>c>>val;
            if(c=='a')
            {
                n++;
                update(1, 1, limit, n, val, 1);
            }
            else
            {
                if(tree[1].sum < val ) cout<<"none"<<endl;
                else cout<<query(1, 1, limit, val)<<endl;
            }
        }

        mem(tree, 0);
    }

    return 0;
}

///Before submit=>
///    *check for integer overflow,array bounds
///    *check for n=1

