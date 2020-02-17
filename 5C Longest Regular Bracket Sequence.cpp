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
#define l(s)                      s.size()
#define tcas(i,t)             for(ll i=1;i<=t;i++)
#define pcas(i)                printf("Case %lld: ",i)

#define N 100006
  ll m,n,t,b,c,d,i,j,k=1,x,y,z,l,q,r;
int main()
{
      ll cnt=0,ans=0, on=0, off=0;
      string s;
      cin>>s;
        stack<ll>p;
        p.push(-1);


         fr(i, l(s))
         {
             //debug;
             if(s[i]=='(')  p.push(i);
             else
             {
                 cout<<i<<" bug "<<p.top()<<endl;
                 p.pop();
                 if(!p.empty() )
                 {
                 ll top= i-p.top();
                 cout<<top<<" "<<i<<" "<<p.top()<<endl;

                 if(top>ans)ans=top, k=1;

                 else if(top==ans)k++;//cout<<i<<endl,
                 }
                 else p.push(i);
             }
                cout<<i<<" - "<<p.top()<<endl;
         }

    if(ans>0)cout<<ans<<" "<<k<<endl;
    else cout<<"0 1"<<endl;

return 0;
}





