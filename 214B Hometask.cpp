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
#define pn                  printf("\n")
#define pb                  push_back
int main()
{
    ll m,n,t,b,c,d,i,j,k,x,y,z,sum=0;

    scl(n);
    ll cnt=0, cn=0;
    vector<ll>a,v;
    vector<ll>::iterator it;

    for(i=0; i<n; i++)   cin>>x, a.pb(x);
    sort(a.rbegin(), a.rend());
    fr(i,a.size()){if(a[i]%3==2)cnt++; if(a[i]%3==1)cn++;}


    cnt%=3, cn%=3;
    //cout<<cnt<<" "<<cn<<endl;
    ll lagbena =cnt-cn;
    ll badh_1=0, badh_2=0;

    if(lagbena>0)  badh_2=lagbena%3;
    else               badh_1=abs(lagbena)%3;

    //cout<<a.size()<< " "<<badh_1<<" "<<badh_2<<" "<<lagbena<<endl;

    for(i=n-1; i>=0;i--)
    {
        it=a.begin()+i;
        if(a[i]%3==1 and badh_1>0) a.erase( it), badh_1--;
        if(a[i]%3==2 and badh_2>0) a.erase( it),badh_2--;
    }
    x=0;
    fr(i, a.size()-1)
    {
        if(a[i]==0)x++;
        else break;
    }

    if(sum%3==0 and  a[a.size()-1]%2==0 and (a[a.size()-1]==0 or a[a.size()-1]==5 )) for(i=x;i<a.size();i++)cout<<a[i];
    else   cout<<"-1"<<endl;

    return 0;
}





