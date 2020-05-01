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


int main()
{

    ll m,n,t,b,c,d,i,j,k,x,y,z,l,q,r;

      ll cnt=1,ans=0;
      string s,s1;
      cin>>n>>s;
      if(n==1){cout<<0<<endl<<s<<endl; return 0;}
      //fr(i,n)cout<<s[i]<<" ";
      //s+='A';
     vector<ll>v;

      fr1(i, n)
      {
          if(s[i-1]==s[i] ){cnt++; if(cnt%2==0)v.pb(i); }
          else
          {
              if(cnt>1 ){
              //cout<<i<<" "<<cnt<<endl;
              ans+=(cnt/2);
              cnt=1; }
          }
      }
     // pfl(ans);

     // fr(i,v.size()) cout<<v[i]<<" - ";

      //pn;
      j=0;

      fr(i,n)
      {
          if(ans>0 &&  i==v[j]  )
            {
            j++ ;
            if(  i+1< n&& ( s[i-1]=='R' && s[i+1]=='G'  || s[i-1]=='G' && s[i+1]=='R'   )) s[i]='B';
            else if( i+1< n&& (s[i-1]=='G'&& s[i+1]=='B' || s[i-1]=='B' && s[i+1]=='G' )) s[i]='R' ;
            else if( i+1< n&& ( s[i-1]=='R'&& s[i+1]=='B' || s[i-1]=='B' && s[i+1]=='R')) s[i]='G' ;
            else if( i+1< n&&  s[i-1]==s[i+1] )
            {
                //debug;
                //cout<<i<<" "<<s[i-1]<<" "<<s[i+1]<<endl;
                if(s[i]=='R' )s[i]='G';
                 else if(s[i]=='G' )s[i]='B';
                  else if(s[i]=='B' )s[i]='R';
            }


            else  if(i+1==n  )
            {
                if(s[i-1]=='R'  )s[i]='G';
                 if(s[i-1]=='G'  )s[i]='B';
                  if(s[i-1]=='B'  )s[i]='R';
            }

            }
      }

       pfl(ans);
      fr(i,n)cout<<s[i];
      //cout<<s<<ans<<endl;
     //pn;


return 0;
}

/*
#include <bits/stdc++.h>

const int N = 2e5+10;
int n, ans;
char str[N];

char other (char a, char b) {
  if (a == b) return a == 'R' ? 'B' : 'R';
  return 'R' ^ 'B' ^ 'G' ^ a ^ b;
}

int main() {
  scanf("%d%s", &n, str);

  str[n] = 'R';
  for (int i = 1; i < n; i++)
    if (str[i] == str[i-1])
      str[i] = other(str[i], str[i+1]), ans++;
  str[n] = '\0';

  printf("%d\n%s\n", ans, str);
  return 0;
}
*/



