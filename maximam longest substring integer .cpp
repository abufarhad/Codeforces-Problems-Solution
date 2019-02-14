#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

#define ll long long

#define sci(x) scanf("%d",&x)
#define scl(x) scanf("%lld",&x)
int main()
{
    ll b,c,d,p=0,q=0,n,i,ans=0;

    scanf("%lld" ,&n);
    ll a[n];
    for(i=0; i<n; i++)
    {
        cin>>c;
        if(q<c) {p++;}
        else
            p=1;
q=c;
ans=max(ans,p);
    }


    printf("%lld\n",ans);
}

