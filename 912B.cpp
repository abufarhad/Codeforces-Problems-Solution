#include<bits/stdc++.h>
#include<stdio.h>
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
using namespace std;
#define ll                  long long

int main()
{
    ll m,n,b,c,d,i,j,k,x,y,z,l,q,r;

    ll cnt=1,cn=0,ans=0,sum=0 ;
    cin>>n>>k;

    if(k==1){cout<<n<<endl;return 0;}

    while(n>>=1) cnt++;
    ans=1<<cnt ;

    cout<<(ans-1)<<endl;
return 0;
}

/// **************************Before submit****************************

///    ****Please check all base case output  and printing " YES or NO " ***
///    *check for integer overflow,array bounds
///    *check for n=1



