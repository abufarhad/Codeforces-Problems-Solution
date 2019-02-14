#include<bits/stdc++.h>
using namespace std;
#define ll                  long long
#define fr1(i,n)         for(ll i=1;i<=n;i++)
ll m,n,i,k,j;
int main()
{
    ll i,ans,p;
    cin>>n>>k;
    fr1(i,k-1) if(n%i==0)
        ans=k*(n/i)+i;
    cout<<ans<<endl;
}
