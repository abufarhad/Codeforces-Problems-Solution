#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll m,n,i,j, ans=0;
    scanf("%lld %lld",&n,&m);
    ll  a[n], b[m];
    for(i=0;i<n;i++)
    {
        scanf("%lld",&a[i]);
    }
     for(i=0;i<m;i++)
    {
        scanf("%lld",&b[i]);
    }
  sort(a,a+n); sort(b,b+m);
//    sort(a,a+n,greater<int>());
//    sort(b,b+m,greater<int>());
    ans= a[n-2]*b[m-1];
    printf("%lld\n",ans);
}
