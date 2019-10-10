#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll a,b,c;
    cin>> a>>b>>c;
    ll ans=2* min(a, b )+ 2*c;
    if(a!=b)ans++;
    cout<<ans<<endl;
}
