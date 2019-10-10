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
ll cnt[100];
int main()
{

    ll m,n,t,c,d,i,j,k,x,y,z,l,q,r;

    ll ans=0;
    cin>>n>>m;
    ll a[n][m], b[n][m];

    fr(i,n) fr(j,m) cin>>a[i][j];
    fr(i,n) fr(j,m) cin>>b[i][j];

    fr(i,n)fr(j,m-1) if((a[i][j]>=a[i][j+1] || b[i][j]>= b[i][j+1] ) && (a[i][j]>=b[i][j+1] || b[i][j]>=a[i][j+1] )) {cout<<"Impossible"<<endl;return 0;}
    fr(i,n-1)fr(j,m) if((a[i][j]>=a[i+1][j] || b[i][j]>= b[i+1][j] ) && (a[i][j]>=b[i+1][j] || b[i][j]>=a[i+1][j] )) {cout<<"Impossible"<<endl;return 0;}

    cout<<"Possible"<<endl;

    return 0;
}




