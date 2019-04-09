#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
#define ll                  long long
#define scl(n)              scanf("%lld", &n)
#define pfl(x)              printf("%lld\n",x)
#define fr(i,n)             for (ll i=0;i<n;i++)
#define dsort(a)            sort(a,a+n,greater<int>())
int main()
{
    ll m,n,t,b,c,d,i,indx_mx,indx_mn,j,k,x,y,z,l,q,r,mx,mn;
    ll cnt=0,ans=0,sum=0;
    scl(n);
    ll  a[n];
    for(i=0; i<n; i++) {cin>>a[i];sum+=a[i];}
    dsort(a);
    ans=sum;

    fr(i,n-1)
    {
        for( j=2;j<a[i];j++ )
        {
            if(a[i]%j==0)
            {
                mn=a[n-1]*j + a[i]/j;
                ll sum1=a[i]+a[n-1];
                mx=sum-sum1;
                mx+=mn;
                //cout<<ans<<" "<<sum<<endl;
                ans=min(ans,mx);
            }
        }
    }

    pfl(ans);
    return 0;
}




