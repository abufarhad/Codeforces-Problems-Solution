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

ll ok[100007]= {0};

int main()
{
    ll m,n,i,j,k, result=100007;
    string s,s1,s2;

    scl(n), scl(k);
    cin>>s;
    set<char>st;

    for(i=0; i<n; i++) st.insert(s[i]);

    //cout<< st.size()<<endl;

    if(st.size() == k)
    {

        for(i=0; i<n; i++)
        {
            ok[s[i]]++;
        }

        for(i=0; i<1000; i++)
        {
            if(ok[i]!=0)
            {
               // cout<<(char)i<<" "<<cnt[i]<<endl;
                result=min(result,ok[i] );
            }
        }
        cout<<result*k;
        printf("\n");
    }
    else
        cout<<"0";
        printf("\n");
}
