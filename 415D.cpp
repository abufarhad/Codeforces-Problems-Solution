
#include <iostream>
using namespace std;
#define N 2005
#define ll long long
ll dp[N][N];
void pre()
{
    for(int i=1; i<=N; i++)
        dp[1][i]=1;
}
const ll int mod=1e9+7;
int main()
{
    pre();
    ll n,k, l;
    cin>>n>>l;
    for(int i=2; i<=l; i++)
    {
        for(int j=1; j<=n; j++)
        {
            for(int k=j; k<=n; k+=j)
            {
                dp[i][k]+=(dp[i-1][j])%mod;

            }
        }
    }

    ll res=0;
    for(int i=1; i<=n; i++)
        res=(res+dp[k][i])%mod;
    cout<<res<<endl;
    return 0;
}
