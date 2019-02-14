#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,n,i;
   cin>>n;
   while(n--){
    cin>>a;
    if(a<0){
        for(i=a;i<=0;i++){ printf("%d",i); if(i==0)break; else printf(" "); }
    } else
    for(i=0;i<=a;i++){
       printf("%d",i); if(i==a)break; else  printf(" ");}
    printf("\n");
   }
return 0;
}
