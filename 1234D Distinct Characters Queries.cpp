#include<bits/stdc++.h>
using namespace std;
#define ll                  long long
#define scl(n)              scanf("%lld", &n)
#define scc(c)	    scanf(" %c", &c);
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define pfl(x)              printf("%lld\n",x)
#define endl 	            "\n"
#define pb                  push_back
#define test_case(t)  printf("Case %d:\n",t)
#define mx                  100005
#define tcas(i,t)           for(ll i=1;i<=t;i++)
#define pcas(i)             printf("Case %lld:\n",i)
#define debug               printf("I am here\n")
#define scs(n)              scanf("%s", n)

ll  tree[26][mx*4];
string s;


void build_tree(ll nd, ll l, ll r, ll id)
{
    if(l==r)
    {
        ll val=s[l]-'a';
        if(val==id)tree[id][nd]=1;
        return;
    }

    ll left=2*nd;
    ll right=2*nd +1;
    ll mid=(l+r)/2;
    build_tree(left, l, mid, id);
    build_tree(right, mid+1, r, id);

    //tree[nd]=tree[left]+tree[right];
    tree[id][nd]=tree[id][left] +tree[id][right];

}

void update(ll nd, ll l, ll r, ll pos, ll  id, ll type)
{
    if(l> pos ||  r<pos)return ;
    if(l==r and l==pos)
    {
        if(type==1)
        {
            tree[id][nd]=1;
        }
        else
        {
            tree[id][nd]=0;
        }
        return ;
    }
    ll left=nd*2;
    ll right=nd*2+1;
    ll mid=(l+r)/2;
    update(left, l, mid, pos,id, type);
    update(right, mid+1, r, pos,id, type);

    tree[id][nd]=tree[id][left] +tree[id][right];

}

ll query(ll nd, ll l, ll r, ll x, ll y, ll id)
{
    if( y<l || x >r  )return 0 ;
    if( l>=x and r<=y) return tree[id][nd];

    ll left=nd*2;
    ll right=nd*2+1;
    ll mid=(l+r)/2;
    ll p=query(left, l, mid, x,y,id);
    ll q=query(right, mid+1, r, x,y,id);
    return p+q;
}


int main()
{
    ll t,n,m,k,x;
    cin>>s;
    scl(t);
    s="#"+s;
    n=s.size();

    fr(i, 26)build_tree(1,1,n, i);

    while(t--)
    {
     scl(x);
     if(x==1)
     {
         ll pos;
         char c;

         scl(pos);
         scc(c);

         if(s[pos]==c)continue;
         ll new_id=c-'a';

         update(1,1,n, pos,s[pos]-'a', 2);
         s[pos]=c;
         update(1,1,n, pos, new_id, 1);
     }
     else
     {
         ll cnt=0;
         ll l,r;
        scl(l), scl(r);

         fr(i, 26)
         {
             ll tmp=query(1,1,n,l,r,i);
             if(tmp)cnt++;
         }
         pfl(cnt);
     }
    }
}
