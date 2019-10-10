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
#define endl 	            "\n"
#define pb                  push_back
#define l(s)                s.size()
#define asort(a)            sort(a,a+n)
#define dsort(a)            sort(a,a+n,greater<int>())
#define vasort(v)           sort(v.begin(), v.end());
#define vdsort(v)           sort(v.begin(), v.end(),greater<int>());
#define pn                  printf("\n")
map<ll,ll>mp;
ll a[100005];
int main()
{
      ll n,k;
      cin>>n>>k;
      ll cnt=0,ans=0;

      a[0]=0;
      fr1(i,n)cin>>a[i];
      ll x=0, y=n, mid, ok=0, p=0,j=0;
      while(x<=y)
      {
          mid=(x+y)/2;
          ans=0;
          ll sum[n+5]={0};
          sum[0]=0;
         // cout<<"mid "<<mid<<endl;

          fr1(i,n)  sum[i]=a[i]+(i*mid);

          //fr1(i,n)cout<<" sum ="<<sum[i]<<endl;

          sort(sum, sum+n+1);
         // cout<<"mid "<<mid<<endl;

          fr1(i, mid)ans+=sum[i];
         // cout<<"ans "<<ans<<endl;
          mp[mid]=ans;
          if(ans>k)y=mid-1;
          else if(ans<k)x=mid+1;
          else  {ok=ans, p=mid; break;}

      }
      if(ans<=k)cout<<mid<<" "<<ans<<endl;
      else
      {
          //cout<<mp.size()<<endl;
          if(mp.size()!=0 and mid-1>=0)cout<<mid-1<<" "<<mp[mid-1]<<endl;
          else cout<<0<<" "<<0<<endl;
      }

return 0;
}

///Before submit=>
///    *check for integer overflow,array bounds
///    *check for n=1


