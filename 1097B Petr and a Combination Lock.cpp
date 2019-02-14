#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
#define ll                  long long
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)

ll m,n,l,j;
vector<ll>v;

ll dfs(int i, int sum)
{
    //cout<<i<<" "<<sum<<endl;
    if(i==n) return sum%360==0;
    else return ( dfs(i+1, sum+v[i]) || dfs(i+1, sum-v[i]) );
}

int main()
{
    cin>>n;
    fr(i,n)  cin>>l, v.push_back(l);

    if(dfs(0,0))cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}


