//! Bismillahi-Rahamanirahim.
/** ========================================**
 ** @Author: Md. Abu Farhad ( RUET, CSE'15)
 ** @Category:
/** ========================================**/

#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;


#define ll                  long long
#define fr(i,n)           for (ll i=0;i<n;i++)
#define fr1(i,n)         for(ll i=1;i<=n;i++)
#define debug           printf("I am here\n")
#define pb                 push_back
#define mp                make_pair
#define ppb                pop_back
#define scl(x)            scanf("%lld",&x)
#define pfl(x)            printf("%lld\n",x)
#define ps                 printf(" ")
#define pn                 printf("\n")
#define dsort(a)        sort(a,a+n,greater<int>())
#define asort(a)        sort(a,a+n)
#define mod             10000007
#define mx               (1<<28)
#define Pi                  2*acos(0.0)

#define frrev(i,a,b)    for(int i=a;i>=b;i--)
#define scl2(x,y)       scanf("%lld %lld",&x,&y)
#define pf(x)            push_front(x)
#define ppf(x)          pop_front(x)

#define ms(a,b)      memset(a, b, sizeof(a))
#define scc(x) scanf("%[^\n]s",x); // For charecter string input , It will  read all charecter untill Enter new line .
#define TEST_CASE(t)     for(int z=1;z<=t;z++)
#define PRINT_CASE       printf("Case %d: ",z)


int main()
{
    ll m,n,b,i,res,x,y,p;

    scl(n);

    ll a[n+2],ans=0;
    a[0]=0, a[n+1]=0;
    fr1(i,n)
    {
        cin>>a[i];
    }
    for(i=1; i<=n;)
    {
        if(a[i]==1 &&a[i+1]==0&&a[i+2]==1 )
        {
            ans++;
            i+=3;
        }
        else i++;
    }
    pfl(ans);
}
