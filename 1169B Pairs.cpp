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
#define endl 	            "\n"
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

#define N 300005

ll  a[N], b[N], c[N], d[N];

int main()
{

    ll m,n,t,i,j,k,x,y,z,k1,z1,l,q,r;

      ll cnt=0,ans=0;
      scl(n);scl(m);

    ll cnta=1,cntb=1,cna=1,cnb=1;
    fr1(i,m)  cin>>a[i]>>b[i];


       fr1(i,m-1)
       {
           if(a[1]==a[i+1] || a[1]==b[i+1] ) c[i+1]=1, cnta++;
           if(b[1]==a[i+1] || b[1]==b[i+1] ) d[i+1]=1, cntb++;
       }
       if(cnta==m || cntb==m ){cout<<"YES"<<endl; return 0;}

       c[1]=1,d[1]=1;

       for(i=2; i<=m;i++) if(c[i] !=1 )  { l=i; k=a[i]; k1=b[i]; break;}//
       for(i=2; i<=m;i++) if(d[i] !=1 )  { r=i; z=b[i]; z1=b[i]; break;}//

       c[l]=1,d[r]=1;

       pfl(k);pfl(z);
       pn;
       fr1(i,m)
       {
           if(c[i] !=1 ) if(k==a[i] || k== b[i] || k1==a[i] || k1== b[i] )  cna++ ,cout<<"a "<<i<<endl;

           if(d[i] !=1 ) if(z==a[i] || z== b[i] ||z1==a[i] || z1== b[i]  ) cnb++ ,cout<<"b "<<i <<endl;
       }

       cout<<cnta<<" "<<cntb<<" "<<cna<<" "<<cnb<<endl;

       if( cnta+cna==m || cntb+cnb==m)cout<<"YES"<<endl;
       else cout<<"NO"<<endl;

return 0;
}

/*
5 7
1 5
1 5
5 2
5 2
5 2
3 2
1 4
*/



