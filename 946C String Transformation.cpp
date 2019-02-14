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
    ll l,n,m,i;
    string s;
    cin>>s;

        ll pos1=-1,ans=-1;
        l=s.size();
        //cout<<l<<endl;
        if(l>=26)
        {
            for(i=0; i<l; i++)  { if(s[i] =='a')  { pos1=i;  break;} }
            //
            if(pos1 ==-1) { pfl(ans); return 0;  }

            else{
            //cout<<pos1<<endl;
            char ch='b';
            for(i=pos1+1 ; i<l; i++)
            {
                if(s[i]<=ch)
                {
                    s[i]=ch; ch++;
                }
                if(ch==('z'+1)) break;
            }
            //cout<<endl;
            if(ch==('z'+1))
            {
                for(i=0;i<l;i++) cout<<s[i];
            }
            else {cout<<ans<<endl;}
        }
    }
     else cout<<ans<<endl;

}
