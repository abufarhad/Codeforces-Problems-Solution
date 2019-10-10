#include<stdio.h>
using namespace std;
#define ll                  long long
#define scl(n)              scanf("%lld", &n)
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define pfl(x)              printf("%lld\n",x)
#define endl 	            "\n"
#define pb                  push_back
#define l(s)                s.size()
#define md                  1000000007

int main()
{
    ll m,n,t,b,c,d,i,j,k,x,y,z,l,q,r;
    ll h,w;
     scl(h), scl(w);

     ll hight[h], width[w];

     fr1(i,h)scl(hight[i]);
     fr1(i,w)scl(width[i]);
     ll ans=1;

     fr1(i,h)
     {
         fr1(j,w)
         {
            if( (i-1)==width[j]  and (j-1)<hight[i])  {ans=0;break;}
            if( (i-1)<width[j]    and (j-1)==hight[i]){ans=0;break;}
            if( (i-1)>width[j]    and (j-1)>hight[i])  {ans=(ans*2) %md ;}
         }
     }

     pfl(ans);




return 0;
}

///Before submit=>
///    *check for integer overflow,array bounds
///    *check for n=1

