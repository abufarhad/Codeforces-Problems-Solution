//! Bismillahi-Rahamanirahim.
/** ========================================**
 ** @Author: Md. Abu Farhad ( RUET, CSE'15)
 ** @Category:
/** ========================================**/

#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
#define ll                  long long
#define fr(i,n)           for (ll i=0;i<n;i++)
#define fr1(i,n)         for(ll i=1;i<=n;i++)

int main()
{
    ll i,j,k,l,m,n,save=-1;
    string s,s1;
    cin>>n>>s;

    for(i=0; i<n-1; i++)
    {
        if(s[i] > s[i+1])
        {
            save=i;
            break;
        }
    }
    if(save!=-1)
    s.erase(s.begin()+ save );
    else
    s.erase(s.begin()+ n-1 );

    cout<<s<<endl;
}
