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

int main()
{
    ll m,n,t,b,c,d,i,j,k,x,y,z,l,q,r;

      ll cnt=0,ans=0;
      set<ll>s;
      set<ll>::iterator it;
      vector<ll>v;
      scl(n);
      ll  a[n];
      for(i=0;i<n;i++)
      {
          cin>>a[i];
          s.insert(a[i]);
      }


      if(s.size()==1 || s.size()==2)cout<<"YES"<<endl;
      else if( s.size()==3)
      {
        for(it=s.begin(); it!=s.end();it++) v.pb(*it);
        if(v[0]+v[2]==2*v[1]  ) cout<<"YES"<<endl;  ///if(v[1] - v[0] == v[2] - v[1]) printf("YES\n");
        else cout<<"NO"<<endl;
      }
      else cout<<"NO"<<endl;

return 0;
}




