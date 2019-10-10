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

int main()
{

    ll m,n,t=1,c,d,i,j,k,x,y,z,l,q,r;

      ll cnt=0,sum=0;
      scl(n);scl(m);
      ll a[n], b[m];

       fr1(i,n)cin>>a[i];

       fr(i, m)
       {
           cin>>x;
           while(sum+a[t]< x)sum+=a[t++];
         cout<<sum<<endl;
           printf("%lld %lld\n", t, x-sum);
       }

return 0;
}





