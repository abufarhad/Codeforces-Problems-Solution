
/// consequtive vowel thakle 2nd ta badh hye jabe

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

    ll m,n,i,k;

    cin>>n;
    char c[n],s[n];
    for(i=0; i<n; i++)
    {
        cin>>c[i];
    }
    int j=0;
cout<<c[0];
        for(i=1; i<n; i++,j++)
        {
            if((c[i]=='a'||c[i]=='e'||c[i]=='i'||c[i]=='o'||c[i]=='u'||c[i]=='y')&&(c[i-1]=='a'||c[i-1]=='e'||c[i-1]=='i'||c[i-1]=='o'||c[i-1]=='u'||c[i-1]=='y'))
            {
               continue;
                //n--;
            }
            else cout<<c[i];
        }
    return 0;
}
