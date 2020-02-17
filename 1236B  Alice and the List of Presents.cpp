#include<bits/stdc++.h>
using namespace std;

#define ll long long
ll md= 1e+7;

ll big(ll x,ll y)
{
    if(y==0)return 1;
    if(y%2)return (x*big(x, y-1) )%md;
    else return (big(x, y/2)*big(x, y/2))%md;
}

int main()
{
     ll m,n,i,j;
     cin>>n>>m;
     cout<< big( big(2, m )-1, n )%md<<endl;
}
