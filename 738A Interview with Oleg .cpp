#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;


#define ll                  long long
#define scl(n)              scanf("%lld", &n)
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)

int main()
{
    ll m,n,i,k,l,r,cnt=0,cn=0;
    string s;
    cin>>n>>s;

    //string ans = regex_replace(s, regex{"ogo(go)*"}, "***");

    fr(i,n)
    {
        if(s[i]=='o')
        {
            if(i+2<n && s.substr(i,3)=="ogo" )
            {
                while(i+2<n && s.substr(i,3)=="ogo")i+=2;
                cout<<"***";
            }
            else cout<<"o";
        }
        else cout<<s[i];
    }
}
