#include<bits/stdc++.h>
using namespace std;
#define ll                  long long
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define pfl(x)              printf("%lld\n",x)

ll a[30];

int main()
{
    ll m,n,t,b,c,d,i,j,k,x,y,z,l,q,r;
    string s,s1;
     cin>>n>>k>>s;

        ll cnt1=1,ans=0,mx=-1;

        for(i=0;i<n;i++ )
        {
            ll cnt=1;
            while(cnt<k && s[i]==s[i+1]){i++;cnt++;}
            if(cnt==k) a[s[i]-'a']++;
        }
        fr(i,26)
        {
            if(ans< a[i])ans=a[i];
            //cout<<a[i]<<" ";
        }
        pfl(ans);

    return 0;
}





