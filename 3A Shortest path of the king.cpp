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
#define pn                  printf("\n")
#define debug               printf("I am here\n")
#define ps                  printf(" ")


int main()
{
    int m,n,t,b,c,d,i,j,k,z,x1,y1,r,ans;
    string s,s1,s2;
    char x,y;
      vector<string>v;
      while(cin>>x>>x1>>y>>y1)
      {
          ans=max( abs(x-y), abs(x1-y1) );
          cout<<ans<<endl;
          while((abs(x-y)|| abs(x1-y1)))
          {
              if(x>y)
              {
                  cout<<"L";
                  x--;
              }
              if(x<y)
              {
                  cout<<"R";
                  x++;
              }
              if(x1>y1)
              {
                  cout<<"D";
                  y1++;
              }
              if(x1<y1)
              {
                  cout<<"U";
                  y1--;
              }
              pn;
          }
      }

return 0;
}




