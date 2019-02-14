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
string s;

int main()
{
    ll m,n,t,b,c,d,i,j,k,r;
    stack<char>st;
    cin>>s;

    k=0;
    fr(i,s.size())
    {
        if(st.size()==0) { st.push(s[i]);continue;}
        if( st.top()==s[i])
        {
            k++;
            st.pop();
        }
        else
            st.push(s[i]);
    }


    if(k%2==0)
        cout<<"NO"<<endl;
    else
        cout<<"YES"<<endl;

    return 0;
}




