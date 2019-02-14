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
#define fr1(i,n)          for(ll i=1;i<=n;i++)
#define frrev(i,a,b)    for(int i=a;i>=b;i--)
#define scl(x)            scanf("%lld",&x)
#define pfl(x)            printf("%lld\n",x)
#define ps                 printf(" ")
#define pn                 printf("\n")
#define sortD(a)        sort(a,a+n,greater<int>())
#define sortA(a)        sort(a,a+n)
#define pb(x)            push_back(x)
#define ppb(x)          pop_back(x)
#define pf(x)            push_front(x)
#define ppf(x)          pop_front(x)
#define MOD            10000007
#define Pi                 2*acos(0.0)
#define ms(a,b)      memset(a, b, sizeof(a))
#define scc(x) scanf("%[^\n]s",x); // For charecter string input , It will  read all charecter untill Enter new line .
#define TEST_CASE(t)     for(int z=1;z<=t;z++)
#define PRINT_CASE       printf("Case %d: ",z)
#define infinity         (1<<28)
#define EPS           10E-10
///string charecter frequency --->
// for(i=0;i<s.length();i++) {  cnt[s[i]-'a']++; }

#define mx 1000005
bool prime[mx];
ll p[mx];
void sieve()
{
    prime[0]=prime[1]=1;
    for(ll i=4; i<=mx; i+=2)prime[i]=1;
    for(ll i=3; i*i<=mx; i+=2)
    {
        if( !prime[i] && i<=sqrt(mx) )
        {
            for(ll j=i*i; j<=mx; j+=2*i) prime[j]=1;
        }
    }
}

int main()
{
    ll m,n,p,l,i;
    while(cin>>n)
    {
        sieve();
        if(n<3)cout<<"1"<<endl;
        else cout<<"2"<<endl;

        for(i=2; i<=n+1; i++)
        {
            if(prime[i]) cout<<"2 ";
            else cout<<"1 ";
        }
        cout<<endl;
    }
}
