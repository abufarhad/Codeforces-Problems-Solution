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
    char s,c;
    cin>>n;
    char a[n],b[n];

    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }

        for(i=0; i<n; i++)
        {
            b[i]=toupper(a[i]) ;
        }
        sort(b,b+n);

     /*   for(i=0; i<n; i++)
        {
            cout<<b[i]<<" " ;
        }
     */

        for(i=0; i<n; i++)
        {
            if(b[i]!=b[i+1]) cnt++;
        }
     //   cout<<cnt<<endl;
        if(cnt==26) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        return 0;

}
