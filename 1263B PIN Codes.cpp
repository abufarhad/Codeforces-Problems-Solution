#include<bits/stdc++.h>
using namespace std;

#define ll                  long long
#define scl(n)              cin>>n;
#define scc(c)	            cin>>c;
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll m,n,i,j,k;
        ll cnt=0, ans=0;
        map<string, bool> check, check_first;
        cin>>n;
        string s[n+5], s1, s2;

        fr(i,n)cin>>s[i], check_first[s[i] ]=true;

        fr(i,n)
        {
            cnt=0;
            if(! check[ s[i] ] )
            {
                check[ s[i] ]=true;
            }
            else
            {
                s1=s[i];

                fr(j, s1.size())
                {
                    s2=s1;

                    for(char cc='1' ; cc<='9'; cc++)
                    {
                        s2[j]=cc;

                        if( !check[ s2 ]  and  !check_first[s2 ] )
                        {
                            ans++;
                            cnt=1;
                            s[i]=s2;
                            check[s2]=true;
                            break;
                        }
                    }
                    if(cnt) break;
                }
            }
        }

        cout<<ans<<endl;
        fr(i,n)cout<<s[i]<<" "<<endl;

    }

}
