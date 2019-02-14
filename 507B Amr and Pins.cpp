#include<bits/stdc++.h>
using namespace std;

 int main()
 {
     int m,n,i;
     double a,b,r,x,y,p;
     cin>>r>>a>>b>>x>>y;

     double dist=pow((a-x),2) +pow((b-y),2);

     p=sqrt(dist);
    // cout<<dist<<" "<<p<<endl;

     double step=ceil(p/(2*r));
     cout<<step<<endl;
 }
