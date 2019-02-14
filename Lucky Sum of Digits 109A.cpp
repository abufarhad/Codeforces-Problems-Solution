#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

#define ll long long

int main()
{
    ll m,n,t;
    cin>>n;
    string s;

   while(n>0)
    {
        if(n%7==0){ s+='7'; n-=7;}
        else { s+='4'; n-=4;}
    }
    if(n) cout<<-1<<endl;
    else cout<<s<<endl;


    return 0;
}









