#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
#define ll                  long long

int main()
{
    int m,h;
      ll cnt=0,ans=0;
      string s;
      scanf("%d : %d",&h,&m);

      while(1)
      {
          m++;
          if(m==60){ m=0, h++;}
          if( h==24)h=0;
          if(h/10==m%10 && h%10==m/10)break;
      }
      cout<<h/10<<h%10<<":"<<m/10<<m%10<<endl;


return 0;
}




