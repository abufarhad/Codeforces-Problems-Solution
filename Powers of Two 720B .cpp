#include<bits/stdc++.h>
using namespace std;
map<int,int>M;
long long ans=0;
int main()
{
    int n,a;
    cin>>n;
    while(n--)
    {
        cin>>a;
        for(int i=0; i<=31; i++)
        {
            ans+=M[(1LL<<i)-a];
            cout<<(1LL<<i)-a<<endl;
        }
        cout<<M[a]<<endl;
        M[a]++;
    }
    cout<<ans;
}
