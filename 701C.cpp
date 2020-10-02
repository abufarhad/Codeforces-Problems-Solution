#include<bits/stdc++.h>
using namespace std;
#define scc(c)	            scanf("%c",&c)
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)

#define ll long long

int main()
{
    ll i , j , n , k=0, cnt=0, ans;
    string s, s1;
    cin>>n>>s;
    map<char , ll > mp;

    fr(i, n)
    {
        mp[s[i] ]++;
        cnt=mp[s[i] ];

        while(mp[s[k] ]  > 1 )
        {
            mp[s[k] ]--;
            k++;
        }

        if(cnt==1)ans=i-k+1;
        else ans=min( ans ,  i-k+1 );
    }

    cout<<ans<<endl;
}
