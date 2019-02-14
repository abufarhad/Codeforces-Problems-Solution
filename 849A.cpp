#include<bits/stdc++.h>
using namespace std;
 int main()
 {

     int m,n,i,b;
     cin>>n;
     int a[n];
     for(i=0;i<n;i++)
     {
         cin>>a[i];
     }
     if(n%2)
     {
         if(a[0]%2 and a[n-1]%2)
         {
             cout<<"Yes"<<endl;
         }
         else cout<<"No"<<endl;
     }
     else cout<<"No"<<endl;

 }
