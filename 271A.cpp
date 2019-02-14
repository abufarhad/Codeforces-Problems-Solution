#include<bits/stdc++.h>
using namespace std;
 int main()
 {
     int a,b,c,d,e,f,y;
     cin>>y;
     while(1){
        y++;
        a=y/1000;
        b=y/100;
        c=b%10;   d=y/10;  e=d%10;  f=y%10;
        if(a!=c&&a!=e&&a!=f&&c!=e&&c!=f&&e!=f) break;

     }
     cout<<y<<endl;
     return 0;
 }


