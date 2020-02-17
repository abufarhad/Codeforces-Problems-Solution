#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
     ll i,j,m,n,t;
     cin>>t;
     while(t--)
     {
         double a,b,c,d,k;
         cin>>a>>b>>c>>d>>k;
         ll cnt=ceil(a/c);
         ll cn=ceil(b/d);
         if(cn+cnt <=k) cout<<cnt<<" "<<cn<<endl;
         else cout<<-1<<endl;

     }
}
