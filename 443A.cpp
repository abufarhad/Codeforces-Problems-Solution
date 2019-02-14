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
    ll m,n,t,b,c,d,i,j,k,x,y,z,l,q,r;

      ll cnt=0,ans=0;
      string s,s1;
      //char c;
      //cin>>s;
      set<char>st;
       set<char>:: iterator it ;
      getline(cin,s);
      //cout<<s.size()<<endl;
      fr(i,s.size())
      {
          if(s[i]==',' || s[i]=='{' || s[i]=='}' || s[i]==' ' ) continue;
          else st.insert(s[i]);
      }
      cout<<st.size()<<endl;
      //for(it = st.begin(); it != st.end(); it++) cout << *it << endl;


return 0;
}




