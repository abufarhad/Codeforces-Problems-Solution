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

ll cnt[200005]={0};
int main()
{
    ll m,n,t,b,c,d,i,j,k,x,y,z,l,q,r,mx=-1e9;

      ll ans=0;
      scl(n);
      y=n;
      ll  a[n];
      vector<ll>v,v1;
      for(i=0;i<n;i++)
      {
          cin>>a[i];
          cnt[a[i] ]++;
          mx=max(mx, cnt[a[i] ] );
      }
      asort(a);

      //pfl(mx);

      if(mx>=3)cout<<"NO"<<endl;
      else
      {
          if(n==1)  { cout<<"YES"<<endl; cout<<"0"<<endl<<endl<<"1"<<endl<<a[0]<<endl;}
          else if(n==2)
          {
              cout<<"YES"<<endl;
              cout<<"1"<<endl<<a[0]<<endl;
              cout<<"1"<<endl<<a[1]<<endl;
          }
          else if(n==3)
          {
              cout<<"YES"<<endl;
              cout<<"1"<<endl<<a[0]<<endl;
              cout<<"2"<<endl<<a[2]<<" "<<a[1]<<endl;
          }
          else if(n>3)
          {
             cout<<"YES"<<endl;
             for(i=1;i<n; )
              {
                  if(a[i-1]==a[i]){ v.pb(a[i-1]), v1.pb(a[i]); i+=2; y-=2; }
                  else { v1.pb(a[i-1]) , i++; y--; }
              }
              if(y!=0){ v1.pb(a[n-1]); }

              cout<<v.size()<<endl;
              fr(i,v.size())cout<<v[i]<<" ";
              pn;
              vdsort(v1);
              cout<<v1.size()<<endl;
              fr(i,v1.size())cout<<v1[i]<<" ";
          }
      }

return 0;
}




