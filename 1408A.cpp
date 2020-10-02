//! Bismillahi-Rahamanirahim.
/** ========================================**
 ** @Author: Md. Abu Farhad ( RUET, CSE'15)
 ** @Category:
/** ========================================**/

#include<bits/stdc++.h>
#include<stdio.h>
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
using namespace std;


#define ll                  long long
#define scl(n)              scanf("%lld",&n)
#define scll(n, m)          scanf("%lld%lld",&n, &m)
#define scc(c)	            scanf("%c",&c)
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define pfl(x)              printf("%lld\n",x)
#define pb                  push_back
#define debug               cout<<"I am here"<<endl;
#define pno                 cout<<"NO"<<endl
#define pys                 cout<<"YES"<<endl
#define tcas(i,t)           for(ll i=1;i<=t;i++)
#define all(x) 	            (x).begin(), (x).end()
#define allrev(x)           (x).rbegin(),(x).rend()
#define pr                  pair<ll, ll>
#define ff                  first
#define ss                  second
#define pn                  printf("\n")

#define l(s)                s.size()
#define asort(a)            sort(a,a+n)
#define dsort(a)            sort(a,a+n,greater<int>())
#define uniquee(x)          x.erase(unique(x.begin(), x.end()),x.end())
#define el                  cout<<endl
#define md                  1000000007
#define inf                 1e18
#define ps                  cout<<" ";
#define Pai                 acos(-1.0)
#define mem(a,i)            memset(a, i, sizeof(a))
#define pcas(i)             cout<<"Case "<<i<<": "<<endl;
#define seg_tree(n) 	    ll left=n*2,right=l+1,mid=(l+r)/2
#define fast 	ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)

#define N 200005


int main()
{
    ll t;
    cin>>t;
    //t=1;
    tcas(cs, t)
    {
        ll m,n,b,c,d,i,j,k,x,y,z,l,r, p, q;
        string s,s1, s2, s3, s4;

        ll cnt=0,cn=0,ans=0,sum=0 ;
        cin>>n;

        ll a[5][n];
        vector<ll>v, v1;

        fr(i , 3)
        {
            cnt=0;
            fr(j , n)
            {
                cin>>a[i][j] ;
            }
        }

        fr(j , n)
        {
            cnt=0;
            x=a[i][j] , y=a[i+1][j]  , z=a[i+2][j];

           if(v1.size()==0)v1.pb(x ) , cnt=1;
           else
           {
                if(cnt==0 and  v1[ v1.size()-1 ] != x )v1.pb(x ) , cnt=1;
                if(cnt==0 and  v1[ v1.size()-1 ] != y )v1.pb(y ) , cnt=1;
                if(cnt==0 and  v1[ v1.size()-1 ] != z )v1.pb(z ) , cnt=1;
           }
        }


        i=0, j=n-1 , cnt=0;
        if(v1[v1.size()-1]==v1[0] )
        {
            x=a[i][j] , y=a[i+1][j]  , z=a[i+2][j];

            if(cnt==0 and   v1[ v1.size()-1 ] !=  x  and v1[ v1.size()-2 ] !=  x  )v1[ v1.size()-1 ] = x ,  cnt=1;
            if(cnt==0 and   v1[ v1.size()-1 ] !=  y  and v1[ v1.size()-2 ] !=  y )v1[ v1.size()-1 ] = y , cnt=1;
            if(cnt==0 and   v1[ v1.size()-1 ] !=  z  and v1[ v1.size()-2 ] !=  z  )v1[ v1.size()-1 ] = z ,cnt=1;
        }

        fr(i , v1.size())cout<<v1[i]<<" ";
        pn;
    }

return 0;
}

/// **************************Before submit****************************

///    ****Please check all base case output  and printing " YES or NO " ***
///    *check for integer overflow,array bounds
///    *check for n=1



