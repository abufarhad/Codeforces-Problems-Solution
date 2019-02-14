#include<stdio.h>
//using namespace std;
int main()
{
    double m,n,a;
    scanf("%f%f%f",&m,&n,&a);
    double  ans=ceil(m/a)*(ceil(n/a));
    int p=ans;
    printf("%d\n",p);

    return 0;
}

