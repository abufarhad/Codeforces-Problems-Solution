#include<bits/stdc++.h>
using namespace std;
#define ll long
string s[]={"1110111", "0010010", "1011101", "1011011", "0111010", "1101011", "1101111", "1010010", "1111111", "1111011"};
string ss ;
ll cost[2010][10] , n;
ll dp[2010][2010], res[2010];

ll solve(ll in, ll k)
{
    if(k<0) return 0;
    if(in>=n  )
    {
        if(k==0 )return 1;
        else return 0;
    }
    if(dp[in][k] !=-1 )return dp[in][k];
    ll ret=0 , i;

    //starting from max when found then break . if no one found out then return 0.
    for( i=9; i>=0; i--)
    {
        ret=solve(in+1 , k-cost[in][i] );
        if( ret==1)break;
    }

    res[in]=i;
    return dp[in][k]=ret;
}


int main()
{
    ll i , j, m,k;
    cin>>n>>m;
    for(i=0; i<n; i++)
    {
        cin>>ss;
        for(j=0; j<10; j++)
        {
            for(k=0; k<7;k++)
            {
            if(ss[k]==s[j][k] )continue;
            else if(ss[k]=='1'  and s[j][k]=='0' )cost[i][j]=1e9;
            else cost[i][j]++;
            }
          //cout<<j<<" "<<cost[i][j]<<endl;
        }
    }

    memset(dp , -1, sizeof(dp));
    ll ans=solve(0 , m);

    if(ans)  for(i=0; i<n; i++)cout<<res[i];
    else cout<<-1<<endl;

}

