#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll i ,n;
    while(cin>>n)
    {
        ll a[n];
        for(ll o=0; o<n; o++)cin>>a[o], a[o]=abs(a[o]);

        //Need  number of pair such that this eqn hold  =>[  min(abs(x-y) , abs(x+y) ) <= x<= y<= max(abs(x-y) , abs(x+y) ) ]
        //Formalize the eqn if all ( x, y ) > 0 then  y-x<=x<=y<=y+x   then  ==> x<=y<=2x
        //So , All we need to care about x<=2*x how many such pair

        sort(a, a+n);
        ll ans=0;
        for(i=0; i<n; i++)
        {
            ll x=a[i]*2;

            ll up=upper_bound(a+i+1, a+n, x)-(a+1+i);

            ans+=up;
        }
        cout<<ans<<endl;
    }

}
