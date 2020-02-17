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
#define scc(c)	            scanf(" %c", &c);
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define pfl(x)              printf("%lld\n",x)
#define pb                  push_back
#define l(s)                s.size()
#define asort(a)            sort(a,a+n)
#define all(x) 	            (x).begin(), (x).end()
#define dsort(a)            sort(a,a+n,greater<int>())
#define vasort(v)           sort(v.begin(), v.end());
#define vdsort(v)           sort(v.begin(), v.end(),greater<int>());

int main()
{
    ll m,n,t,i,j,k,x,y,z,l,q,r;
    cin>>t;
    while(t--){
    ll a,b,c,d;
    cin>>a>>b>>c>>d;

    ll cnt=0;
    ll tmp=d%c;
    ll vag=d/c;

    if(vag>a  )
    {
        k=a*c;
        if(k+b >=d)cnt=1;
    }
    else if( vag<=a)
    {
        k=vag*c;
        if(k+b >=d)cnt=1;
    }
    else  if(tmp !=0)if(tmp <=b )cnt=1;
    else  if(tmp ==0  and vag <=a)cnt=1;




    if(cnt==1  or d<=b )cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

  }

return 0;
}



