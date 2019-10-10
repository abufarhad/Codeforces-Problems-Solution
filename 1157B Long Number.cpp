#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;


#define ll                  long long
#define scl(n)              scanf("%lld", &n)
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define pfl(x)              printf("%lld\n",x)
#define pb                  push_back
#define asort(a)            sort(a,a+n)
#define dsort(a)            sort(a,a+n,greater<int>())
#define vasort(v)         sort(v.begin(), v.end());
#define vdsort(v)         sort(v.begin(), v.end(),greater<int>());
#define pn                  printf("\n")
#define md                  10000007
#define debug               printf("I am here\n")
#define ps                  printf(" ")
ll a[15];
bool b;
int main()
{
    ll m,n,t,c,d,i,j,k,z,l,q,r;
    ll x,y;

      ll cnt=0,ans=0;
      scl(n);
      string s,s1;
      cin>>s;
      fr1(i,9) cin>>a[i];

      fr(i,n)
      {
         x=s[i]-'0'; y=a[x];
         if(x<y ) s[i]=y+'0', b=1;
         else if(x>y && b){  break;}//cout<<i<<" ";
      }
      //pn;
      cout<<s;
return 0;
}




