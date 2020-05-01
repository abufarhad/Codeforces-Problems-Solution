#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll total, lcm, a, b;
ll calc(ll n )
{
    return  (n/lcm)*total + max(0ll ,  n%lcm - b +1 );
}

int main()
{
    ll m, t, n, i , j ;
    cin>>t;
    while(t--)
    {
        vector<ll>v;
        ll q;
        cin>>a>>b>>q;

        if(a>b)swap(a, b);

        lcm=a*b/__gcd(a, b);
        total=lcm- b;

        while(q--)
        {
            ll l , r;
            cin>>l>>r;

            ll ans=calc( r ) - calc( l-1 ) ;
            v.push_back(ans);
        }
    for(auto it : v)cout<<it<<" ";
    cout<<endl;
    }
}
