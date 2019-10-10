#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll i,j,k,m,n,a,b;
    while(cin>>n>>a>>b)
    {
      a--, b--;
      ll cnt=0;
      while(a!=b)a/=2, b/=2, n/=2,cnt++;

      if(n==1)cout<<"Final!"<<endl;
      else cout<<cnt<<endl;
    }
}
