#include <stdio.h>
#include <iostream>
#include <climits>
#include <map>
#include <cmath>
#include <algorithm>
#include <set>
#include <stack>
#include <deque>
#include <vector>
#include <stdlib.h>
#include <string>
#include <string.h>
#include <utility>
#include <queue>


using namespace std;

#define ll long long
#define ulli  unsigned ll int

#define sl(n) scanf("%lld", &n)
#define sl2(a,b) scanf("%lld%lld", &a,&b)
#define sl3(a,b,c) scanf("%lld%lld%lld", &a,&b,&c)
#define sl(n) scanf("%lld", &n)
#define sf(n) scanf("%lf", &n)
#define si(n) scanf("%d", &n)
#define ss(n) scanf("%s", n)
#define pii pair <int, int>
#define pll pair <ll, ll>
#define plp pair <int, pll >
#define pb push_back
#define mkpr  make_pair
#define   ff   first
#define   ss  second
#define  srt(V)  sort(V.begin(),V.end());
#define nl printf("\n");

#define  PI  2*acos(0.0);
#define  INFP ( (ll)1<<62)
#define  INFN (0-(ll)1<<62)
#define  loop(a,b)  for(int g=a;g<=b;g++)
#define  for1(n)  for(int i=0;i<n;i++)
#define  for2(n)  for(int j=0;j<n;j++)
#define  for3(n)  for(int k=0;k<n;k++)
#define  for4(n)  for(int l=0;l<n;l++)
#define  tst(n)  for(int cs=1;cs<=n;cs++)
#define spc <<" "<<
#define limit 1000009
typedef pair<ll int,ll int> iPair;

int main()
{
    ll n,a,b;
    cin>>n>>a>>b;
    ll x=-1;
    for(ll i=0; i<=n; i++)
    {
        x=n-i;
       // cout<<i<<" "<<x<<endl;
        if(i%a==0&&x%b==0) break;
        else  x=-1;
    }

    //cout<<x<<endl;

    if(x==-1)
    {
        puts("-1");
        return 0;
    }

    ll p=(n-x)/a;
    ll q=x/b;
//cout<<p<<q<<endl;

    for(ll i=p+1; i<=n-x; i++)  cout<<i<<" ";

    for(ll i=1; i<p+1; i++)  cout<<i<<" ";

    for(ll i=n-x+1+q; i<=n; i++) cout<<i<<" ";

    for(ll i=n-x+1; i<n-x+1+q; i++)  cout<<i<<" ";

}
