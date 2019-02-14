#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fr(i,n)           for (ll i=0;i<n;i++)
#define fr1(i,n)         for(ll i=1;i<=n;i++)
int main()
{
    ll n,m,k,i,j,t;
    string s,s1,s2="abcdefghijklmnopqrstuvwxyz",s3;
    cin>>t;
    while(t--){
    s.clear(), s1.clear(), s3.clear();
    cin>>n>>k;
    m=n/k;
    ll rem=n%k;

    fr(i,k) s1+=s2[i];

    if(rem==0){ fr(i,m) {s3+=s1; } sort(s3.begin(),s3.end()); cout<<s3<<endl;}
    else{
    fr(i,m) {s3+=s1;}
    s3+=s1;
    while(s3.size()!=n ) s3.erase(s3.begin()+(s3.size()-1) ); sort(s3.begin(),s3.end());
    cout<<s3<<endl;
    }
}
}
