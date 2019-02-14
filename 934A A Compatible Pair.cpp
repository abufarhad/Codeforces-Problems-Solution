#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll Inf = 1LL << 62;
int main()
{
    ll m,n,i,k, j,a[51], b[51];
    vector<ll>v;
    cin>>n>>m;

    for(i=0;i<n;i++) cin>>a[i];
     for(i=0;i<m;i++) cin>>b[i];

     for(i=0;i<n;i++)
     {
         k=-Inf;
         for( j=0;j<m;j++)
         {
            k=max(k, a[i] *b[j]);
         }
         v.push_back(k);
     }

     sort(v.begin(), v.end());
     cout<<v[n-2];

}
