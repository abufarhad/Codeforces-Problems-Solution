
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
    string s;
    ll i,n,j,k,x;
    cin>>s;
    s="00"+s;
    n= s.size();
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            for(k=j+1; k<n; k++)
            {
                cout<<s[i]<<" "<<s[j]<<" " <<s[k]<<endl;
                x=(s[i]-'0')*100+(s[j]-'0')*10+(s[k]-'0');
                if(x%8==0)
                {
                    cout<<"YES"<<endl<<x;
                    return 0;
                }
            }
        }
    }
    cout<<"NO"<<endl;
    return 0;
}
