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

int main()
{
    ll n,m,i,j=1,k,cnt=0;
    cin>>n>>m;
    ll a[102030],b[102003];

    for(i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    for(i=1; i<=m; i++)
    {
        cin>>b[i];
    }

    ll t1=0,t2=0;
    for(i=1; i<=n; i++)
    {
        t1+=a[i];
        //cout<<t1<<" "<<t2<<endl;
        while(t1>t2) t2+=b[j++];
        if(t1==t2) t1=t2=0, cnt++;
    }

    cout<<cnt<<endl;
    return 0;
}

