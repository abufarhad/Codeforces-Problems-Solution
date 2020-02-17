#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
int main()
{
    ll m,n,i,j;
    string s;
    while(cin>>s)
    {
        ll sum=0, cnt=0, res=0;
        ll sz=s.size();
        fr(i,sz)
        {
            n=s[i]-'0';
            n%=3;
            sum+=n;
            cnt++;      ///My assummtion : any 3 digit that are not divisible by 3 their addition divisible by 3, if not there must have 2 digit their addition divided by 3
            if(n==0 || sum%3==0 || cnt==3 )res++, cnt=0, sum=0;
        }
        cout<<res<<endl;
    }
}
