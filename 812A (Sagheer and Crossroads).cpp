#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

#define ll long long

#define sci(x) scanf("%d",&x)
#define scl(x) scanf("%lld",&x)
#define scd(x) scanf("%lf",&x)

#define pfi(x) printf("%d",x)
#define pfl(x) printf("%lld",x)
#define pfd(x) printf("%lf",x)
#define pfc(x) printf("Case %d: ",x++)
#define ps printf(" ")
#define pn printf("\n")

#define pb(x) push_back(x)
#define ppb(x) pop_back(x)
#define pf(x) push_front(x)
#define ppf(x) pop_front(x)
#define in(x,y) insert({x,y})
#define sv(a) sort(a.begin(),a.end())

int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int i, j,k ,lo,l1,l2,l3,so,s1,s2,s3,po,p1,p2,p3,ro,r1,r2,r3;
    cin>>lo>>so>>ro>>po;
    cin>>l1>>s1>>r1>>p1;
    cin>>l2>>s2>>r2>>p2;
    cin>>l3>>s3>>r3>>p3;
    int y=0;
    if(po==1 && (lo==1||so==1||ro==1||l1==1||s2==1||r3==1))
    {
        y=1;
    }
    if(p1==1 && (l1==1||s1==1||r1==1||l2==1||s3==1||ro==1))
    {
        y=1;
    }
    if(p2==1 && (l2==1||s2==1||r2==1||l3==1||so==1||r1==1))
    {
        y=1;
    }
    if(p3==1 && (l3==1||s3==1||r3==1||lo==1||s1==1||r2==1))
    {
        y=1;

    }

    if(y==1)
    {
        cout<<"YES"<<endl;
    }
    else
        cout<<"NO"<<endl;
    return 0;
}
