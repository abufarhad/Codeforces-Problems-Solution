//! Bismillahi-Rahamanirahim.
/** ========================================**
 ** @Author: Md. Abu Farhad ( RUET, CSE'15)
 ** @Category:
/** ========================================**/

#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;


#define ll                  long long
#define ull                 unsigned long long LL
#define scl(n)              scanf("%lld", &n)
#define scf(n)              scanf("%lf", &n)
#define pfl(x)              printf("%lld\n",x)
#define md                 998244353
#define pb                  push_back
#define mp                  make_pair
#define pp                  pair<LL,LL>
#define fr(i,n)            for (ll i=0;i<n;i++)
#define fr1(i,n)           for(ll i=1;i<=n;i++)


int main()
{
    ll m,n,i,k,j;
    string s,s1,s2;
    while(cin>>n>>s)
    {
        ll cnt=1,cnt_ini=1,cnt_lst=1,ans=1;

        fr(i,n)
        {
            if(s[i]==s[i+1]){cnt_ini++; }
            if(s[i]!=s[i+1]) break;
        }
        reverse(s.begin(),s.end());
        fr(i,n)
        {
            if(s[i]==s[i+1]){cnt_lst++; }
            if(s[i]!=s[i+1]) break;
        }
        reverse(s.begin(),s.end());

        if(s[0]==s[n-1])  ans=(cnt_ini+1)%md*(cnt_lst+1)%md;
        else ans=(cnt_ini+cnt_lst+1)%md;

        cout<<ans<<endl;

    }

}
