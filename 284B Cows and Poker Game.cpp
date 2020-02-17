#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll m,i,k,j;
    cin>>m;
    string s;
    cin>>s;
    ll a=count(s.begin(), s.end(), 'A');
    i=count(s.begin(), s.end(), 'I');

    if(i==1)cout<<1<<endl;
    else if (i>1)cout<<0<<endl;
    else cout<<a<<endl;
}
