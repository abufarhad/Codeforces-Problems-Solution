
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
    int n,i,cnt=0;
    char s[10000],*p;
    scanf("%s",s);

    p=strstr(s,"AB");
    if(p&&strstr(p+2,"BA")) return cout<<"YES"<<endl,0;
    p=strstr(s,"BA");
    if(p&&strstr(p+2,"AB")) return cout<<"YES"<<endl,0;

    cout<<"NO"<<endl;

    return 0;

}
