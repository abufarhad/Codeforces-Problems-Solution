#include<stdio.h>
int main()
{
    int i,j,k,l,n,sum1,sum2,c;
    scanf("%d",&n);
   for(i=1;i<=n;i++)
    {
        int sum=0;
        scanf("%d %d\n",&k,&l);
        sum1=sum+k;
        sum2=sum+l;
    }
    if(sum1>sum2){
        printf("Missak");}
    else
        printf("chek");

    if(sum1==sum2)
        printf("drew");

        return 0;
}
