
#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

#define ll long long

#define sci(x) scanf("%d",&x)
#define scl(x) scanf("%lld",&x)
#define scd(x) scanf("%lf",&x)
#define scc(x) scanf("%[^\n]s",x); // For charecter string input , It will  read all charecter untill Enter new line .

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
    ll n,k,m,i;
    scl(n),scl(k);
    ll    ans=n;
    ll j;
    for(i=1,j=1; i<=k; i++)
    {
        if(n%10==0)
        {
            n=n/10;
            //cout<<n<<endl;
        }
        else
        {

            n=n-j;
            //cout<<n<<endl;
        }
    }
    if(n<0)
    {


string :
        stringstream ss;
        ss << ans;
        string str= ss.str();
        cout<<str[0];

    }

    else
        printf("%lld\n",n);

    return 0;
}
