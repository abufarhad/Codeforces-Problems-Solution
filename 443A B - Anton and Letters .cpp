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
#define sortD(a)  sort(a,a+n,greater<int>())
#define sortA(a)  sort(a,a+n)
set<char>s;
int main()
{
    char a[1000000],b,c;
    ll i,n;
    //cin>>a;
   scanf("%[^\n]s",a);
    ll len=strlen(a);
    for(i=0;i<len;i++)
    {
       if(a[i]>='a' && a[i]<='z'){ s.insert(a[i]);}
        else continue;
    }

    cout<<s.size()<<endl;
return 0;
}
