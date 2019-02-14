#include<stdio.h>
int main()
{
    int m;
    scanf("%d",&m);
    //m=k/2.0;
    if(m%2==0 && m!=2)
        printf("YES");
    else
        printf("NO");
    return 0;
}
