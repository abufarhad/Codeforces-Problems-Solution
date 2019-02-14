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
vector<ll> v;
int main()
{
    ll i,d,e,k,m,j,n,x,cnt=0;
    cin>>n>>k;


    for(i=1; i<=sqrt(n); i++)
    {

        if(n%i==0)
        {
            v.push_back(i);
            if(n/i !=i)
            {
                v.push_back(n/i);
            }
        }
    }

    sort(v.begin(),v.end());

    if(k>v.size())
    {
        cout<<"-1"<<endl;
    }
    else
        cout<<v[k-1]<<endl;
    return 0;
}
