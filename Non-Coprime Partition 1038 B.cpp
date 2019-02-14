#include<bits/stdc++.h>
using namespace std;

#define ll long long

#define sci(x) scanf("%d",&x)
#define scl(x) scanf("%lld",&x)
#define scd(x) scanf("%lf",&x)
#define scc(x) scanf("%[^\n]s",x); // For charecter string input , It will  read all charecter untill Enter new line .

#define pfi(x) printf("%d",x)
#define pfl(x) printf("%lld\n",x)
#define pfd(x) printf("%lf",x)
#define pfc(x) printf("Case %d: ",x)
#define ps printf(" ")
#define pn printf("\n")
#define pb(x) push_back(x)
#define ppb(x) pop_back(x)
#define pf(x) push_front(x)
#define ppf(x) pop_front(x)

vector<ll>f1;
vector<ll>f2;

int main()
{
    ll m,n,k,l,ans,jor=0,bijor=0,ok=0,ok1=0,i;
    scl(n);
    if(n==1)
    {
        cout<<"No"<<endl;
        return 0;
    }
    else
    {

        for(i=1; i<=n; i++)
        {
            if(i%2==0)
            {
                jor+=i;
                f1.push_back(i);
                ok++;
            }
            else
            {
                bijor+=i;
                f2.push_back(i);
                ok1++;
            }
        }

        ans= __gcd(jor,bijor);
        if(ans>1)
        {
            cout<<"Yes"<<endl;

            cout<<ok<<" ";
            for(i=0; i<f1.size(); i++) printf("%lld ",f1[i]);
            printf("\n");
            cout<<ok1<<" ";
            for(i=0; i<f2.size(); i++) printf("%lld ",f2[i]);
        }
        else
            cout<<"No"<<endl;

    }

}
