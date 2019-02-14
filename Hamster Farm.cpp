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
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);

    ll m,i,k,save=1;
    ll n;

    cin>>n>>k;
    ll a,x,y,maxi=n+10;
    for(i=1; i<=k; i++)
    {
        cin>>a;
        x=n%a;
        if(x<maxi)
        {
            //cout<<x<<"  "<<maxi<<endl;
            maxi=x;
            save=i;
            y =a;
        }
    }
    printf("%lld %lld\n", save, n/y);


    return 0;
}
