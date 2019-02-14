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

int main()
{
    string s,s1;
    ll m,n,i,j,k;

        cin>>s;
        ll cnt=0,ans=0,l=s.size();

        fr(i,l)if(s[i]!='[')cnt++;else break;
        s.erase(0,cnt);

        //cout<<s<<endl;

        if(s.size()==0)ans=-1;
        else
        {
            cnt=0;
            fr(i,s.size())if(s[i]==':')break;else cnt++;
            s.erase(1,cnt-1);

           //cout<<s<<endl;

        reverse(s.begin(), s.end());

       cnt=0;
       fr(i,s.size())if(s[i]==']')break;else cnt++;
        s.erase(0,cnt);

        //cout<<s<<endl;

        cnt=0;
        fr(i,s.size())if(s[i]==':')cnt++;

        if(cnt <2 )ans=-1;
        else
        {
        cnt=0;
        fr(i,s.size())if(s[i]==':')break;else cnt++;
        s.erase(1,cnt-1);

        cnt=0;
        fr(i,s.size())if(s[i]=='|')cnt++;
        cout<<4+cnt<<endl;
        return 0;
        } }
        pfl(ans);

    }
