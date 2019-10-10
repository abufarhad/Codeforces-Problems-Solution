#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
#define ll                  long long
#define scl(n)              scanf("%lld", &n)
#define fr(i,n)             for (ll i=0;i<n;i++)
int main()
{

    ll m,n,t,b,c,d,i,j,k,x,y,z,l,q,r;

      ll cnt=0,ans=0;
      scl(n);
      string s,s1;
      map<string, string>mp;

      fr(i,n)
      {
          cin>>s>>s1;
          if( mp.count(s)==0 )mp[s]=s;
          mp[s1]=mp[s];
          mp.erase(s);
      }
      cout<<mp.size()<<endl;

      for( auto it:mp)
      {
          cout<<it.second<<" "<<it.first<<endl;
      }


return 0;
}


