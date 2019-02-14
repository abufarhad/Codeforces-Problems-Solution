

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
    string s,s1;

    ll i,n,j,k,x,m;
    cin>>n>>m;
    char a[101];
    int  b[101];
    for(i=0; i<n; i++)
    {
        cin>>s;
        b[i]=s.size();
    }
    cin>>s1;
    x=s1.size();
    //sort(b,b+n);
    ll cnt=0,cnt1=0;
    for(i=0; i<n; i++)
    {
        if(x>b[i])
        {
            cnt++;
        }
        if(x==b[i]) cnt1++;
    }
    ll ans1= cnt/m *5+cnt+1;
    ///worst case
  //cout<<cnt1<< " "<<cnt<<endl;
    ll ans= ((cnt+cnt1-1)/m)*5+cnt1+cnt;
    cout<<ans1<<" "<<ans<<endl;
    return 0;
}
