#include<bits/stdc++.h>
using namespace std;
int main(){
int h,m;
float a,b,c,d;
while(scanf("%d:%d",&h,&m)==2){
if(h==0&&m==0) break;
//a=(0.5*(h*60+30));
//b=(6*m);
c=(.5*((60*h)-(11*m)));
if(c>180){
    d=360-c;
    printf("%.3f",d); }
    else
    printf("%.3f",c);}
return  0;
}
