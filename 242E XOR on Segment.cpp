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
//ll x[10]= {0,-1,-1,1,1,-2,-2,2,2};

#define N 100006

ll tree[4*N], a[N];
//
void build(ll nd, ll l, ll r)
{
    if(l==r){tree[nd]=a[l]; return ;}

    ll left=2*nd;
    ll right=left+1;
    ll mid=(l+r)/2;

    build(left, l, mid);

    build(right,  mid+1, r);

    tree[nd]=tree[left]+tree[right];
}




void update(ll nd, ll l, ll r, ll src, ll dst, ll new_val)
{
    if( src >r or dst < l )return ;
    if(src<=l  and dst>=r){tree[nd]=a[nd]^new_val; return ;}

    ll left=2*nd;
    ll right=left+1;
    ll mid=(l+r)/2;

    update(left, l, mid, src, dst, new_val);

    update(right,  mid+1, r, src, dst, new_val);


    tree[nd]=tree[left]+tree[right];

}


ll query(ll nd, ll l , ll r, ll x, ll y)
{
    //if(x>r|| y<l)
    if( x >r  or y<l)return  0 ;
    //if(l>=x&&r<=y )
    if(l>=x   and r<=y){return tree[nd] ;}

    ll left=2*nd;
    ll right=left+1;
    ll mid=(l+r)/2;

    ll p=query(left, l, mid, x, y);
    ll q=query(right,  mid+1, r, x, y);

    return  p+q;
}

int main()
{
    fast;
    ll t;

    ll m,n,b,c,d,i,j,k,x,y,z,l,q,r;
    string s1, s2, s3, s4;

    ll cnt=0,ans=0,sum=0;
    scl(n);
    fr1(i, n)cin>>a[i];

     build(1, 1, n);

     cin>>q;
     while(q--)
     {
         cin>>m;

         if(m==1)
         {
             cin>>x>>y;
             ans=query(1, 1, n, x, y);
             pfl(ans);
         }
         else
         {
             cin>>x>>y>>k;
             update(1 , 1, n, x, y,k);
         }
     }

return 0;
}

///Before submit=>
///    *check for integer overflow,array bounds
///    *check for n=1


