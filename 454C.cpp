#include<bits/stdc++.h>
#include<stdio.h>
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
using namespace std;
#define ll                  long long

int main()
{
    double m,n, i, j;
    cin>>m>>n;
    double ans=0 ;

    /*
    double ans=m , tmp=m;
    while(tmp--)
    {
        ans-=pow( tmp/m , n );
    }
    */

    for(i=1;i<=m;i++)   ans+=(i*  (pow(i/m , n) - pow((i-1)/m , n  )) ) ;

    printf("%.12llf\n", ans);

return 0;
}

///***************Before submit*****************

///    ****Please check all base case output***
///    *check for integer overflow,array bounds
///    *check for n=1


