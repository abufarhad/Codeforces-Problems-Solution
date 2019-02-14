//! Bismillahi-Rahamanirahim.
/** ========================================**
 ** @Author: Md. Abu Farhad ( RUET, CSE'15)
 ** @Category:
/** ========================================**/

#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

#define ll long long
#define fr(i,n)           for(int i=0;i<n;i++)
#define fr1(i,n)          for(ll i=1;i<=n;i++)

ll a[100005],sum[100005];
int main()
{

    ll m,n,t,b,c,d,i,j,k,x,y,z,l,ans;
    string s;
    cin>>s>>t;
    l=s.length();

    sum[0]=a[0];

    for(i=1;i<l;i++)
    {
        sum[i]=sum[i-1]+(s[i-1]==s[i] );
    }

    while(t--)
    {
        cin>>b>>c;
        ans=sum[c-1]-sum[b-1];
        cout<<ans<<endl;
    }

return 0;
}
