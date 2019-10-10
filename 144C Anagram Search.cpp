//! Bismillahi-Rahamanirahim.
/** ========================================**
 ** @Author: Md. Abu Farhad ( RUET, CSE'15)
 ** @Category:
/** ========================================**/

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
#define pn                  printf("\n")
#define md                  10000007
#define debug               printf("I am here\n")
#define ps                  printf(" ")
#define tcas(i,t)             for(ll i=1;i<=t;i++)
#define pcas(i)                printf("Case %lld: ",i)

#define l(s)                      s.size()
#define N 100006

ll cnts[N], cnts1[N];
int main()
{
    ll m,n,t,b,c,d,i,j,k,x,y,z,l,q,r;

      ll cnt=0,ans=0;
     string s, s1;

     cin>>s>>s1;

     ll sz, sz1;
     sz=l(s), sz1=l(s1);

     fr(i, sz1) cnts1[s1[i]-'a' ]++;

     fr(i, sz)
     {
         if(s[ i] != '?'  ) cnts[s[i] -'a']++;
         //debug;
         if(i-sz1+1 >=0)
         {
            // debug;
             ans++;
             fr(j, 26)
             {
                 if(cnts[j ] > cnts1[j] )
                 {
                     ans--;
                     break;
                 }
             }

             if(s[i-sz1+1 ] !='?' ) cnts[s[i-sz1+1 ] -'a']--;

             //debug;
         }
     }

     pfl(ans);

return 0;
}




