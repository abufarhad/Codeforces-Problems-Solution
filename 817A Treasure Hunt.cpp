#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

int main()
{
    int x1,x2,y1,y2,x,y,z,l,q,r;

   cin>>x1>>y1>>x2>>y2>>x>>y;
   l=abs(x1-x2);
   r=abs(y1-y2);
   if( l%x==0 && r%y==0 &&  (l/x)%2 ==(r/y)%2  )  cout<<"YES"<<endl;
   else cout<<"NO"<<endl;
return 0;
}




