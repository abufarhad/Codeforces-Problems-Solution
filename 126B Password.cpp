#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define sci(x) scanf("%d",&x)
#define scl(x) scanf("%lld",&x)
#define scd(x) scanf("%lf",&x)
#define pfi(x) printf("%d",x)
#define pfl(x) printf("%lld",x)
#define  PI  2*acos(0.0);
#define  INFP ( (ll)1<<62)
#define  INFN (0-(ll)1<<62)
#define  loop(a,b)  for(int g=a;g<=b;g++)
#define  for1(n)  for(int i=0;i<n;i++)
#define  for2(n)  for(int j=0;j<n;j++)
#define  for3(n)  for(int k=0;k<n;k++)
#define  for4(n)  for(int l=0;l<n;l++)
#define  tst(n)  for(int cs=1;cs<=n;cs++)
#define spc <<" "<<
#define limit  2367362131
#define  pno  puts("NO");
#define  pys puts("0");
typedef pair<ll,ll> iPair;

string X;
//ll cmsum[100001][55];
ll  hass[100001];


ll int x,y;

bool check[100005];

void  extend_Euclid(ll int a,ll int b)
{
    if(b==0)
    {
        x=a;
        y=0;
        return ;
    }
    extend_Euclid(b,a%b);
    ll int x1=y;
    ll int y1=x-(a/b)*y;
    x=x1;
    y=y1;
}

ll pow(ll x,ll y)
{
    if(y==0)return 1;

    if(y==1) return x;

    ll p=pow(x,y/2)%limit;

    if(y%2==0)
    {
        return (p*p)%limit;
    }
    else
    {
        return (p*(p*x%limit)%limit)%limit;
    }
}

ll  solve(ll xx,ll yy)
{
    ll ans=pow(xx,yy)%limit;
    extend_Euclid(ans,limit);
    x+=limit;
    x%=limit;
    return x;
}

int main()
{
    cin>>X;
    ll val=1000004497;
    ll pw=1;

    for(ll i=1; i<=X.size(); i++)
    {
        pw*=val;
        pw%=limit;

        hass[i]=hass[i-1]+((X[i-1]-'a'+1)*pw)%limit;

        hass[i]%=limit;
        //cout<<hass[i]<<" "<<pw<<endl;
    }

    //precalculate inverse value
    for(ll i=0; i<=100001; i++)  ppw[i]=solve(val,i);

    ll sz=X.size();
    ll mx=0;
    fr1(i, X.size())
    {

        ll val=hass[sz ]-hass[ sz- i ] +limit;
        val%=limit;


        ll xx=ppw[i-1];
        val*=xx;


        if( hass[i]==val )
        {

            //binary_search(hass, hass+sz+1, val );


            mx=i;
        }
    }




}
