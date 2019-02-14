//! Bismillahi-Rahamanirahim.
/** ========================================**
 ** @Author: Md. Abu Farhad ( RUET, CSE'15)
 ** @Category:
/** ========================================**/

#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

#define ll long long

int main()
{
    ll m,n,i,k;
    string a,b,query,tmp;
    map<string, string> mp;
    cin>>n>>m;

    while(m--)
    {
        cin>>a>>b;
        mp.insert( make_pair(a,b) );
        mp.insert( make_pair(b,a) );
    }
    while(n--)
    {
        cin>>query;
        tmp=mp.find(query)->second;
        if(query.size()>tmp.size())
        {
            cout<<tmp<<" ";
        }
        else
            cout<<query<<" ";
    }
    return 0;
}
