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

ll cum_sum1[1005][1005],cum_sum2[1005][1005], a[1005][1005];

int main()
{
    ll m,n,i,k,l,r,cnt=0,c,ans=0;
    string s;
    cin>>r>>c;

    fr1(i,r)fr1(j,c)cin>>a[i][j] ,cum_sum1[i][j]=cum_sum1[i][j-1]+a[i][j] ,
                                         cum_sum2[i][j]=cum_sum2[i-1][j]+a[i][j];


    fr1(i,r)fr1(j,c)
    {
        if(a[i][j])continue;
        else
        {
            if(cum_sum1[i][j-1])ans++;
            if(cum_sum2[i-1][j])ans++;
            if(cum_sum1[i][c]- cum_sum1[i][j])ans++;
            if(cum_sum2[r][j]- cum_sum2[i][j])ans++;
        }
    }

    cout<<ans<<endl;

}
