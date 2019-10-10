#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll m,n,i,j,k;
    cin>>m>>n;
    n=min(m,n);
    cout<<n+1<<endl;
    for(ll i=0;i<=n;i++)
    {
        cout<<i<<" "<<(n-i)<<endl;
    }
}
