#include<stdio.h>
int main()
{
    int n,m,r,d=0,i,f,j,t;
   scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
            for(j=i+1;j<n;j++){
            if(a[i]<a[j]){
                t=a[i]; a[i]=a[j]; a[j]=t;
            }}}
       for(i=0; i<n; i++)
    {
printf("%d",a[i]);}
//    m=d/4;
//    if(d%4!=0)
//    {
//        r=m+1;
//        cout<<r;
//    }
//    else
//        cout<<m;
    return 0;
}
