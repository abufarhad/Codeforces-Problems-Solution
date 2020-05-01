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
#define debug               cout<<"I am here"<<endl;
#define pno                 cout<<"NO"<<endl
#define pys                 cout<<"YES"<<endl

#define l(s)                s.size()
#define asort(a)            sort(a,a+n)
#define all(x) 	            (x).begin(), (x).end()
#define dsort(a)            sort(a,a+n,greater<int>())
#define vasort(v)           sort(v.begin(), v.end());
#define vdsort(v)           sort(v.begin(), v.end(),greater<int>());
#define uniquee(x)          x.erase(unique(x.begin(), x.end()),x.end())
#define pn                  cout<<endl;
#define md                  1000000007
#define inf                 1e18
#define ps                  cout<<" ";
#define Pi                  acos(-1.0)
#define pr                  pair<ll, ll>
#define ff                  first
#define ss                  second
#define mem(a,i)            memset(a, i, sizeof(a))
#define tcas(i,t)           for(ll i=1;i<=t;i++)
#define pcas(i)             cout<<"Case "<<i<<": "<<"\n";
#define fast 	ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)

#define N 200006
bool vis[N] , vis1[N];

ll cntt[N];

int main()
{
    fast;
    ll t;
    cin>>t;
    tcas(cs, t)
    {
    ll m,n,c,d,i,j,k,x,y,z,l,q,r;
    string s,s1, s2, s3, s4;

    ll cnt=0,ans=0,sum=0;
    scl(n);
    ll a[n] , b[n];
    ll mx=-1;

    mem(cntt, 0);

    set<ll>st;
    fr1(i,n){cin>>a[i] ,cntt[a[i] ]++,  st.insert(a[i]);  if(mx<a[i] )mx=a[i];}

    //debug;

    ll flg=0;
    fr1(i, n)if(cntt[a[i] ]>2 )flg=1;

    k=1;


    for(auto it: st)
    {
        if(it!=k ) {flg=1; break;}
        k++;
    }
    st.clear();



    mem(vis, 0);

    fr1(i, n)
    {
         if( !vis[a[i]] )vis[a[i] ]=1;
         else if(vis[a[i] ] ){x=i-1; break;}
    }

    mem(vis1, 0);

    for(i=n; i>0; i--)
    {
         if( !vis1[a[i]] )vis1[a[i] ]=1;
         else if(vis1[a[i] ] ){y=i+1; break;}
    }

    if( y-x>0 )flg=1;
    if(flg){cout<<0<<endl; continue;}

    k=n-y+1;

    //y=n-x;

    cout<<x<<" ---  "<<k<<endl;

    j=0;
    for(i=1; i<=n/2; i++ )
    {
        if(a[i]==a[n-j] )cnt++, j++;
    }

    //pfl(cnt);
    //cout<<vis[mx]<<" "<<vis1[mx]<<endl;

    if(x>=k and  vis[mx])
    {
    if(cnt==min(x, n-x) )
    {
        cout<<2<<endl;
        cout<<x<<" "<<n-x<<endl;
        cout<<n-x<<" "<<x<<endl;
    }
    else
    {
        cout<<1<<endl;
        cout<<x<<" "<<n-x<<endl;
    }
    //--------------------------
    }
    else if( k>x and vis1[mx])
    {

    if(cnt==min(y , n-k) )
    {
        cout<<2<<endl;
        cout<<k<<" "<<n-k<<endl;
        cout<<n-k<<" "<<k<<endl;
    }
    else
    {
        cout<<1<<endl;

        fr1(i, n-k)
        cout<<n-k<<" "<<k<<endl;
    }
    }
    else cout<<0<<endl;

    }

return 0;
}

///Before submit=>
///    *check for integer overflow,array bounds
///    *check for n=1



