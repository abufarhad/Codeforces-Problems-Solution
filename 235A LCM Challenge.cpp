#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
#define ll                  long long
#define scl(n)              scanf("%lld", &n)

int main()
{
    ll m,n,ans;
    scl(n);
    if(n==1)ans=1;
    else if(n==2)ans=2;
    else if(n==3)ans=6;
    else if(n>3 && n&1)ans=(n*(n-1)*(n-2));
    else ans=(n-1)*(n-2)*(n-3);
    cout<<ans;
    return 0;
}




