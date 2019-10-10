#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
#define ll                  long long
int main()
{
    ll m,n,i,j,b,c,d;
    ll a[5];
    for(i=0;i<4;i++)cin>>a[i];
    sort(a,a+4);

    printf("%lld %lld %lld\n", a[3]-a[0], a[3]-a[1], a[3]-a[2]);
}
