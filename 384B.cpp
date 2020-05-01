#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll i, j, k, n, m , x;
    cin>>n>>m>>k;
    for(i=0; i<n*m; i++)  cin>>x;


    ll ans=m*(m-1)/ 2;

    cout<<ans<<endl;

    for(i=1; i<=m ; i++)for(j=i+1; j<=m; j++)
    {
        if(k==0) cout<<i<<" "<<j<<endl;
        else cout<<j<<" "<<i<<endl;
    }

}
