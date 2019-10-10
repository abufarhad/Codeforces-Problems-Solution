#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;


#define ll                  long long
#define scl(n)              scanf("%lld", &n)
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define pfl(x)              printf("%lld\n",x)
#define endl 	    "\n"
#define pb                  push_back
#define asort(a)            sort(a,a+n)
#define dsort(a)            sort(a,a+n,greater<int>())
#define vasort(v)         sort(v.begin(), v.end());
#define vdsort(v)         sort(v.begin(), v.end(),greater<int>());
int main()
{
    ll m,n,i,k,l,r,cnt=0,ans=0;
    cin>>n;
    char a[n+1][n+1];
    fr(i,n)fr(j,n)cin>>a[i][j];

    fr(i,n)
    {
        fr(j,n)
        {
            cnt=0;
            if(a[i][j]=='C')
            {
                for(k=i+1;k<n;k++)  if(a[k][j]=='C')cnt++;
                for(k=j+1;k<n;k++)  if(a[i][k]=='C')cnt++;
            }
            ans+=cnt;
        }
    }

pfl(ans);
}
