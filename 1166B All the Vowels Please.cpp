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
#define tcas(i,t)             for(ll i=1;i<=t;i++)
#define pcas(i)                printf("Case %lld: ",i)



int main()
{

    ll m,n,t,b,c,d,i,j,k,x,y,z,l,q,r;

    ll cnt=0,ans=0;
    string s1="aeiou", s2="eioua", s3="iouae", s4="ouaei", s5="uaeio", s;


    scl(n);

    if(n>=25)
    {
        for(ll i=5; i<=n; i++)
        {
            if(n%i==0 && n/i >=5 )
            {
                x=i;
                y=abs(n/i -5) ;

                fr(j,y)s1+='a';
                fr(j,y)s2+='e';
                fr(j,y)s3+='i';
                fr(j,y)s4+='o';
                fr(j,y)s5+='u';

                s=s1+s2+s3+s4+s5;
                //pfl(y);pfl(x);
                fr(j,y)s+=s1;

                cnt=1;
                break;
            }
        }
        if(cnt==0) ans=-1;
    }
    else ans=-1;

    ll     p=0;


 //cout<<s.size()<<endl;
    if(ans ==0)fr(i,n)cout<<s[i];
        //cout<<s<<endl;
    else
        cout<<ans<<endl ;

//    fr(i,n)
//    {
//        if(p==n/x){cout<<endl; p=0; }
//        cout<<s[i];
//        p++;
//    }

    return 0;
}




