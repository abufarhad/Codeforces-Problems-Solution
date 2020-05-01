#include<bits/stdc++.h>
using namespace std;
#define ll long long
string a[100];
int main()
{
    ll m,n,i,j,ans, mn=99999999999999;
    string s,s1;
    cin>>n;

    for(i=0;i<n;i++)cin>>a[i];

    for(i=0;i<n;i++)
    {
        ans=0;
        for(j=0;j<n;j++)
        {
            m=string(a[j]+a[j]).find(a[i]);
            //cout<<a[j]+a[j]<< " "<<a[i]<<" "<<  m<<endl;
            m==string::npos?ans=-1:ans+=m;
        }
        mn=min(ans,mn );
    }
    cout<<mn<<endl;
}
