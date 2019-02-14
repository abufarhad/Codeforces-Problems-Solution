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

ll m,n,t,b,c,d,i,j,k,x,y,z,l,q,r;
string s,s1,s2;

void Subsequence(ll n)
{
    ll cnt=0,last=0,new_last=0;
    for(char c='z';c>='a';c--)
    {
        cnt=0;
       for(i=last;i<n;i++)if(s[i]==c)cnt++;

        if(cnt>=1)
        {
            for(j=last;j<n;j++)
            {
                if(s[j]==c)
                {
                    s2+=s[j];
                    new_last=j;
                }
            }
        }
        last=new_last;
    }
}

int main()
{
    cin>>s;
    l=s.size();

    Subsequence( l );
    cout<<s2<<endl;

return 0;
}
