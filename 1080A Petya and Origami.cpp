#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll m,n,p,ans,a,b,c;
    while(cin>>n>>m)
    {
        a=n*2/m;
        if(n*2%m)a++;
        b=n*5/m;
        if(n*5%m)b++;
        c=n*8/m;
        if(n*8%m)c++;
        ans=a+b+c;
        cout<<ans<<endl;
    }
}
