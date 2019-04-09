#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
#define ll                  long long
#define scl(n)              scanf("%lld", &n)
#define scf(n)              scanf("%lf", &n)
#define pfl(x)              printf("%lld\n",x)

ll calc(ll n)
{
    //cout<<"rem = "<<n%10<<endl;
    ll x;
    if(n==0)return 1;
    if(n<10)return n;
    ll x1= calc(n/10);
    ll x2= calc(n/10 -1);
    //cout<<n%10<<" ->"<<x1<<" "<<9<<" ->"<<x2<<endl;
    //cout<<x1<<" "<<x2<<" -> "<<x<<endl;
    x=max(n%10 * calc(n/10) , 9 *calc(n/10 -1) );
    //cout<<"ans = "<<x<<endl;
    return x;
}

int main()
{
    ll m,n,t,b,c,d,i,j,k,x,y,z,l,q,r;

      ll cnt=0,ans=0;
      scl(n);
      pfl(calc(n));

return 0;
}




