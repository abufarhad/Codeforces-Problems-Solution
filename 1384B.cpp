#include<bits/stdc++.h>
#include<stdio.h>
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
using namespace std;
#define ll                  long long

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll m,n,b,c,d,i,j,k,x,y,z,l,r, p, q;
        string s,s1, s2, s3, s4;

        ll cnt=0,cn=0,ans=0,sum=0 ;
        cin>>n;
        ll a[n];

        for(i=0 ;i<n; i++)  cin>>a[i];

        vector<string>v;
        char ch='a';
          for(i=0 ;i<=25; i++)  s1+=ch, ch++;
        s1+=s1+s1;

        v.push_back(s1);

        ch='a';
        for(i=n-1, j=0 ; i>=0; i--, j++)
        {
            x=a[i];
            s2=v[j];

            swap( s2[x], s2[x+1]);
            v.push_back( s2 );
        }
        reverse(v.begin() , v.end());
        for(i=0 ;i<v.size(); i++)cout<<v[i]<<endl;
    }

    return 0;
}



