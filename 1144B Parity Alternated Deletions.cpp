#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;


#define ll                  long long
#define scl(n)              scanf("%lld", &n)
#define scf(n)              scanf("%lf", &n)
#define pfl(x)              printf("%lld\n",x)

int main()
{
    ll m,n,t,b,c,d,i,j,k,x,y,z,l,q,r;

    ll cnt=0,ans=0;
    scl(n);
    priority_queue<ll>ev,od;
    for(i=0; i<n; i++)
    {
        cin>>x;
        if(x%2 !=0 )  od.push(x);
        else ev.push(x);
    }

    //pfl(od.top());pn;

    while(!od.empty() && !ev.empty() ) od.pop(), ev.pop();

    if(!od.empty())od.pop();
    if(!ev.empty())ev.pop();

    while(!od.empty())
    {
        ans+=od.top();
        od.pop();
    }

    while(!ev.empty())
    {
        ans+=ev.top();
        ev.pop();
    }

    pfl(ans);
    return 0;
}




