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
#define pfl(x)              printf("%lld\n",x)
#define endl 	    "\n"
#define pb                  push_back
#define asort(a)            sort(a,a+n)
#define dsort(a)            sort(a,a+n,greater<int>())
#define vasort(v)         sort(v.begin(), v.end());
#define vdsort(v)         sort(v.begin(), v.end(),greater<int>());
#define pn                  printf("\n")
#define md                  10000007
#define debug               printf("I am here\n")
#define ps                  printf(" ")

#define N 100006

int main()
{
    ll m,n,t,b,c,d,i,j,k,x,y,z,l,q,r, cnt=0;

    string s,s1;
    cin>>n>>s;

    for(i=0; i<n; i+=2)
    {
        if(s[i] ==s[i+1] )
        {
            s.erase(s.begin()+i+1 ),cnt++, i-=2;
        }
        n=s.size();
    }

    if(n%2 !=0) s.erase(s.end()-1 ), cnt++;
    cout<<cnt<<endl<<s;

    return 0;
}
