#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll i=1,j,k,a,b;
    cin>>a>>b;
//    k=a^b;
//    while(i<=k)  i<<=1;
//    cout<<i-1<<endl;

        k= 64 -  __builtin_clzll(a^b);

        ///   __builtin_clzll(a^b )   /// This calculate number of leading zero in a^b
        ll ans;
        cout<<(a<b?1ll<<k:1)-1;     /// if k=2 then 2 left shift 100(4 deci ) -1(deci) =3
}
