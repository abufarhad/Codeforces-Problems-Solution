#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ans[6];
    int n,i,a,b,c,d,e,f,g,h;
    cin>>a>>b>>c;

   ans[0]= a+b*c;
   ans[1]= a*(b+c);
   ans[2]= a*b*c;
  ans[3]=(a+b)*c;
  ans[4]=(a+b+c);
  ans[5]=(a*b+c);
    sort( ans,ans+5);
    cout<<ans[5];

    return 0;
}

