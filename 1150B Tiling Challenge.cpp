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
#define pb                  push_back
#define asort(a)            sort(a,a+n)
#define dsort(a)            sort(a,a+n,greater<int>())
#define vasort(v)         sort(v.begin(), v.end());
#define vdsort(v)         sort(v.begin(), v.end(),greater<int>());
#define pn                  printf("\n")
#define md                  10000007
#define debug               printf("I am here\n")
#define ps                  printf(" ")
//ll find_all_divisor(ll n){  fr1(i,sqrt(n)){     ll i,x;  if(n % i == 0)  { x = n / i; v.pb(i);  if(i != x) v.pb(x);}}}
///cin.ignore(); // Need when we take input as a string line before  getline(cin,s)
//ll bigmod(ll b, ll p, ll md){if(p==0) return 1;if(p%2==1){ return ((b%md)*bigmod(b,p-1,md))%md;} else {ll y=bigmod(b,p/2,md);return (y*y)%md;}}
// int  __builtin_popcount(unsigned int) //It returns the numbers of set bits in an integer
#define N 100006
int main()
{
    ll m,n,t,b,c,d,i,j,k,x,y,z,l,q,r;

    ll cnt=0,ans=0;
    scl(n);
    char a[n][n];

    fr(i,n)
    {
        fr(j,n)
        {
            cin>>a[i][j];
          //  cout << a[i][j] ;
        }
     //   cout << endl;
    }

    fr(i,n )
    {
        fr(j,n)
        {
            if(a[i][j]=='.')
            {
                a[i][j]='#' ;
                ///

                if( i+1 < n && j<n && a[i+1][j]=='.' )
                {
                    a[i+1][j]='#'  ;

                }
                else
                {
                    cout<<"No"; return 0;
                }
                ///

                if( i+1<n && j+1<n && a[i+1][j+1]=='.' )
                {
                    a[i+1][j+1]='#' ;

                }
                else
                {
                    cout<<"No"; return 0;
                }
                ///

                if(  i+1<n && j-1 >=0 && a[i+1][j-1]=='.')
                {
                    a[i+1][j-1]='#'  ;

                }
                else
                {
                    cout<<"No"; return 0;
                }

                ///
                if( i+2< n && j<n && a[i+2][j]=='.')
                {
                    a[i+2][j]='#'  ;

                }
                else
                {
                    cout<<"No"; return 0;
                }
            }
        }
    }

    cout<<"YES"<<endl;


    return 0;
}




