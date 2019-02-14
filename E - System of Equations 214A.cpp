#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

#define ll long long

#define sci(x) scanf("%d",&x)
#define scl(x) scanf("%lld",&x)
#define scd(x) scanf("%lf",&x)
#define scc(x) scanf("%[^\n]s",x); // For charecter string input , It will  read all charecter untill Enter new line .

#define pfi(x) printf("%d",x)
#define pfl(x) printf("%lld\n",x)
#define pfd(x) printf("%lf",x)
#define pfc(x) printf("Case %d: ",x)
#define ps printf(" ")
#define pn printf("\n")



int main()
{

    ll m,n,t,b,c,d,i,j,k,x,y,z,ans=0;
    cin>>n>>m;

    for(i=0;i<=1005;i++)
    {
        for(j=0;j<=1005;j++)
        {
            if(i*i+j==n and i+j*j==m)
                ans++;
        }
    }
    pfl(ans);


return 0;
}

