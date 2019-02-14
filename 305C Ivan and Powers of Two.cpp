
///              ************Incomplete****************


//! Bismillahi-Rahamanirahim.
/** ========================================**
 ** @Author: Md. Abu Farhad ( RUET, CSE'15)
 ** @Category:
/** ========================================**/

#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;


#define ll 	 long long
#define fr(i,n)           for(int i=0;i<n;i++)
#define fr1(i,n)         for(ll i=1;i<=n;i++)
#define debug           printf("I am here\n")
#define frrev(i,a,b)    for(int i=a;i>=b;i--)
#define scl(x)            scanf("%lld",&x)
#define scl2(x,y)       scanf("%lld %lld",&x,&y)
#define pfl(x)            printf("%lld\n",x)
#define ps                 printf(" ")
#define pn                 printf("\n")
#define sortD(a)        sort(a,a+n,greater<int>())
#define sortA(a)        sort(a,a+n)
#define pb(x)            push_back(x)

int main()
{
    ll m,n,t,b,c,d,i,j,k,x,y,z,l,ans=0,sum=0;
    ll pow2[35],pow2v[35], a[100005];

    fr(i,34) {  pow2[i]=1<<i , pow2v[i]=(1<<i)-1; }
    cin>>n;

    fr(i,n) {cin>>a[i]; sum+= (1<<a[i] );}
    fr1(i,33) { if(sum==pow2v[i]) {ans=0; return 0;}  }
    fr1(i,33){ if(sum < pow2v[i] ) lagbe= pow2v[i]-sum;  }

    fr(i, 33) { }

}
