#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
#define ll                  long long
#define scl(n)              scanf("%lld", &n)
ll a[6];
int main()
{
    ll m,n,t,b,c,d,i,j,k,x,y,z,l,q,r;

      ll cnt=0,ans=0;
      cin>>n>>m;

      while(n%2==0)n/=2,a[2]++;
      while(n%3==0)n/=3,a[3]++;
      while(n%5==0)n/=5,a[5]++;
      while(m%2==0)m/=2,a[2]--;
      while(m%3==0)m/=3,a[3]--;
      while(m%5==0)m/=5,a[5]--;

      if(m!=n)cout<<-1<<endl;
      else cout<<(abs(a[2])+abs(a[3])+abs(a[5]) );
return 0;
}



