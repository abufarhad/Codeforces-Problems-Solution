#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
#define ll                  long long

int main()
{
    ll i,n,pow2[35],ans=0;
    cin>>n;
    while(n)
    {
        if(n&1)ans+=1;
        n/=2;
    }
    cout<<ans<<endl;
return 0;
}




