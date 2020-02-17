#include<bits/stdc++.h>
using namespace std;

#define ll long long
int main()
{
    ll i,p, j, k, n;
    cin>>n>>p;

    for(i=0;i<32;i++)
    {
        ll tmp=n-i*p;

        ll bit=__builtin_popcount(tmp);

        if(i>=bit and  tmp >= i ){cout<<i<<endl;return 0;}
    }

    cout<<"-1"<<endl;
}
