#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n, m, j, i;
    ll t;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        if(n%2==0 or m%2==0)cout<<2<<endl;
        else cout<<12<<endl;
    }
}
