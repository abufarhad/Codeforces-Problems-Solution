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
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define pfl(x)              printf("%lld\n",x)
#define endl 	            "\n"
#define pb                  push_back
#define l(s)                s.size()
#define asort(a)            sort(a,a+n)
#define dsort(a)            sort(a,a+n,greater<int>())
#define vasort(v)           sort(v.begin(), v.end());
#define vdsort(v)           sort(v.begin(), v.end(),greater<int>());
#define pn                  printf("\n")
#define md                  10000007
#define inf                 1<<28
#define debug               printf("I am here\n")
#define ps                  printf(" ")
#define mem(a,i)            memset(a, i, sizeof(a))
#define tcas(i,t)           for(ll i=1;i<=t;i++)
#define pcas(i)             printf("Case %lld: ",i)
//ll x[10]= {0,-1,-1,1,1,-2,-2,2,2};
//ll y[10]= {0,-2,2,-2,2,-1,1,-1,1};

//   ios_base::sync_with_stdio(0);
//    cin.tie(0);

// sscanf(c, "%s %s", s,s1); // take string buffer  and then distribute all value , here take 2 value and distribute
///cin.ignore(); // Need when we take input as a string line before  getline(cin,s)
//ll bigmod(ll b, ll p, ll md){if(p==0) return 1;if(p%2==1){ return ((b%md)*bigmod(b,p-1,md))%md;} else {ll y=bigmod(b,p/2,md);return (y*y)%md;}}
//ll find_all_divisor(ll n){  fr1(i,sqrt(n)){     ll x;  if(n % i == 0)  { x = n / i; v.pb(i);  if(i != x) v.pb(x);}}}

///Every even integer greater than 2 can be represented as the sum of two primes numbers.
#define N 100006

int main()
{

    ll m,n,t,c,d,i,j,k,x,y,z,l,q,r;

      cin>>n>>m;
      ll a[n][m], b[n][m];

      fr(i,n)fr(j,m)cin>>b[i][j],a[i][j]=1;

      fr(i,n)fr(j,m)
      {
          if(b[i][j]==0 )
          {
                for(k=0;k<m;k++) a[i][k]=0;
                for(k=0;k<n; k++)a[k][j]=0;
          }
      }

     // fr(i,n){ fr(j,m){cout<<a[i][j]<<" ";} pn;}

      fr(i,n)
      {
          fr(j,m)
          {
              y=0;
              for(k=0;k<m;k++)   y|=a[i][k];
              for(k=0;k<n; k++)   y|=a[k][j];


        //cout<<y<<" "<<i<<" "<<j<<" "<<b[i][j]<<endl;
        if( y !=b[i][j] ){cout<<"NO"<<endl; return 0; }
          }
      }
      cout<<"YES"<<endl;

      fr(i,n){ fr(j,m){cout<<a[i][j]<<" ";} pn;}







return 0;
}

///Before submit=>
///    *check for integer overflow,array bounds
///    *check for n=1


