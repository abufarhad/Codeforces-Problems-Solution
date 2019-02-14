#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll m,n,i,j,p,q,cnt=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>p>>q;
        if(p<q&&p+2<=q) cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}

