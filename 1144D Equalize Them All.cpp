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
#define scf(n)              scanf("%lf", &n)
#define pfl(x)              printf("%lld\n",x)
#define md                  10000007
#define pb                  push_back
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define asort(a)            sort(a,a+n)
#define dsort(a)            sort(a,a+n,greater<int>())
#define vasort(v)         sort(v.begin(), v.end());
#define vdsort(v)         sort(v.begin(), v.end(),greater<int>());
#define pn                  printf("\n")
#define debug               printf("I am here\n")
#define ps                  printf(" ")

ll cnt[200005],res,ans;
int main()
{
    ll m,n,t,b,c,d,i,j,k,x,y,z,l,q,r;


      scl(n);
      ll  a[n];

      fr1(i,n)
      {
          cin>>a[i]; cnt[a[i] ]++;
      }
      for(i=1;i<=n;i++)
      {
          if(cnt[a[i] ] >res ){res=cnt[a[i]], ans=i;}
      }

      //cout<<ans<<" "<<res;pn;

       pfl(n-res);

       if(n-res >0)
       {
           for(i=ans-1;i>0;i-- )
           {
              // cout<<a[i]<<" "<<a[i+1]<<endl;

               if(a[i]<a[i+1] )cout<<1<<" "<<i<<" "<<i+1<<endl;
               else if(a[i]>a[i+1])cout<<2<<" "<<i<<" "<<i+1<<endl;
               a[i]=a[i+1];
           }

          for(i=ans+1;i<=n;i++ )
           {
             //  cout<<a[i]<<" "<<a[i-1]<<endl;

               if(a[i]<a[i-1] )cout<<1<<" "<<i<<" "<<i-1<<endl;
               else if(a[i]>a[i-1])cout<<2<<" "<<i<<" "<<i-1<<endl;
               a[i]=a[i-1];
           }

       }

return 0;
}




