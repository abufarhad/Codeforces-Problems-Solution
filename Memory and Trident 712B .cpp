#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

#define ll long long



int main()
{

    ll m,n,t,b,c,i,j,l=0,r=0,u=0,d=0,ans,lr,ud;
    string s;
    cin>>s;
   n=s.size();
   if(n%2==0)
   {
       for(i=0;i<n;i++)
       {
           if(s[i]=='L') l++;
            if(s[i]=='R') l--;
             if(s[i]=='U') u++;
              if(s[i]=='D') u--;

       }


      ans= abs(l)+abs(u);


       cout<<ans/2<<endl;
       return 0;
   }
   else cout<<"-1"<<endl;




return 0;
}



