#include<stdio.h>
int main(){
int d,p,i,j,count=0;
scanf("%d",&d);
int a[d];
for(i=0;i<d;i++){
    scanf("%d",&a[i]);
}
scanf("%d",&p);
for(i=0;i<p;i++){
    scanf("%d",&x);
for(j=0;j<d;j++){
     if(x>=a[j]){
     count++;}
}
        printf("%d\n",count);
        count=0;
        }
return 0;
}
