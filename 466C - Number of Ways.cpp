#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
#define ll long long
#define sci(x) scanf("%d",&x)
#define scl(x) scanf("%lld",&x)

int main()
{
    ll m,n,t,b,d,j,k,x,y,z, i;
        scl(n);
        ll a[n];

        ll total=0;
        for( i=0; i<n; i++)
        {
            cin>>a[i];
            total+=a[i];
        }

        ll one_third=total/3;
        ll two_third=one_third*2;
        ll sum=0, cnt=0, ans=0;


        for(i=0; i<n-1; i++)
        {
            sum+=a[i];
            if(sum==two_third)ans+=cnt;
            if(sum==one_third)cnt++;
        }

        if(total%3!=0)ans=0;

        cout<<ans<<endl;
    return 0;
}
