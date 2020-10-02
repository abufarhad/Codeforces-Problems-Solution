#include<bits/stdc++.h>
#include<stdio.h>
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
using namespace std;
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define ll                  long long
#define scl(n)              scanf("%lld",&n)
#define scll(n, m)          scanf("%lld%lld",&n, &m)
#define pfl(x)              printf("%lld\n",x)

int main()
{
    ll m, n , i, j;
    string s, s1;
    cin>>s;
    n=s.size();
    ll ans[ n];

    /* We can visualize the problem as a binary tree. Each node is responsible for a interval [a, b].
    ,   we were on a node [0, 1], the stone fell and we jumped to the left, creating a left child [0, 1 / 2] and
        we now know that there is no way the stone will every fall to a position > 1 / 2. This means that in the final solution,
        the current node [0, 1 / 2] will come AFTER all nodes (descendents) that come after this one.
        Same for right side interval [1/2 , 1] .
    */

    ll l=1 , r=n;
    fr(i, n)
    {
        if(s[i]=='l')
        {
            ans[r]=i+1;
            r--;
        }
        else
        {
            ans[l]=i+1;
            l++;
        }
    }


    fr1(i, n)pfl(ans[i]);
}
