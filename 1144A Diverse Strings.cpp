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

int main()
{
    ll m,n,t,b,c,d,i,j,k,x,y,z,l,q,r;

    ll cnt=1,ans=0;
    scl(n);
    string st;
    for(i=0; i<n; i++)
    {
        cin>>st;
        sort(st.begin(), st.end());
        cnt=0;
        for(j=1;j<st.size();j++)
        {
            if(st[j-1]+1  != st[j])
            cnt=1;
        }
        if(cnt==0)  cout<<"YES"<<endl;
        else  cout<<"NO"<<endl;

    }
    return 0;
}





