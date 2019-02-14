#include<bits/stdc++.h>
using namespace std;

#define ll long long
int main()
{
    ll m,n,t,i,k=0;
    string s;
    cin>>n>>t>>s;

    for(i=0;i<n-1;i++)
    {
        if(s.substr(0,i+1) ==s.substr(n-i-1)) { k=i+1; }
    }

    cout<<s;
    for(i=1;i<t;i++)
    {
        cout<<s.substr(k);
    }
}
