
#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
#define ll                  long long
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define pn                  cout<<endl;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll m, n;
        cin>>n>>m;

        fr1(i, n)
        {
            fr1(j, m)
            {
                if(i==n and j==m)cout<<'W';
                else cout<<'B';
            }
            pn;
        }
    }

        return 0;
    }

///Before submit=>
///    *check for integer overflow,array bounds
///    *check for n=1



