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

string a,b;
bool divisor(string s, ll n)
{
    fr(i, l(s) ) if( a[i%n] !=s[i] ){return 0;}//cout<<i<<" "<<i%n<<" "<<a[i%n]<<" "<<s[i]<<endl;
    return 1;
}
int main()
{
    ll m,n,t,c,d,i,j,k,x,y,z,l,q,r;
      ll cnt=0,ans=0;
      cin>>a>>b;
      fr1(i, min( l(a), l(b) ))
      {
          if(l(a)%i==0 and l(b)%i==0 )
          {
              if( divisor(a ,i ) and divisor(b, i) )ans++;//cout<<i<<" - "<<endl,
          }
      }
      pfl(ans);
return 0;
}
