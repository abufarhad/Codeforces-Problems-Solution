#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)


int main()
{
    ll m,n,i,j,k;
    string s, ans, s1,s2;
    cin>>s;
    ll sz=s.size();
    ll sm=0, cnt=0, sum=0;
    fr(i,sz)sum+=s[i]-'0';

    /*
    working from right to left
    make sure that we decrease a digit that
    make the minimum change to the whole number
    99999977   -> 9899999
    9999899
    same summation but the one using the technique of right to lift is higher in value
    */

    for(i=sz-1; i>=0; i--)
    {
        sm=sum;
        if(s[i]!=0)
        {
            sm--;
            for(j=i+1; j<sz;j++)
            {
                sm+=9-(s[j]-'0');
            }
        }
        if(sm>sum)
        {
            s[i]--;
            for(j=i+1; j<sz;j++)s[j]='9';
            sum=sm;
        }
    }

    if(s[0]=='0')for(j=1; j<sz;j++)cout<<s[j];
    else fr(i,sz)cout<<s[i];


}
