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

int main()
{
    unsigned long long  n,i,j,k,x,y,z,l,q,r,cnt=0,ans=0, evn=0,odd=0;

      cin>>n;
      for(i=0;i<n;i++)
      {
          cin>>x;
            ans+=(x%2);
      }

      if(ans==0)cout<<"Second"<<endl;
      else cout<<"First"<<endl;

return 0;
}




