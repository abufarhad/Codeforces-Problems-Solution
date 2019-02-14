//! Bismillahi-Rahamanirahim.
/** ========================================**
 ** @Author: Md. Abu Farhad ( RUET, CSE'15)
 ** @Category:
/** ========================================**/

#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;


#define ll                  long long
#define scl(n)              scanf("%lld", &n)
#define scf(n)              scanf("%lf", &n)
#define pfl(x)              printf("%lld\n",x)
#define md                  10000007
#define pb                  push_back
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)

string s;
pair<ll,ll> p[200005];
stack<ll>st;

int main()
{
    ll m,n,t,b,c,d,i,j,k,x,y,z,l,q,r;

    ll cnt=0,ans=0;
    scl(n);
    fr(i,n)
    {
        cin>>x;
        p[i]=make_pair(x,i);
    }
    cin>>s;
    sort(p,p+n);
    j=0;

    fr(i,s.size())
    {
        if(s[i]=='0')
        {
            cout<<p[j].second +1 <<" ", st.push(p[j].second  ),j++;
        }
        else
        {
            cout<<st.top()+1<<" ", st.pop();
        }
    }

    return 0;
}
/// Using priority queue
/*
int main()
{
    ll m,n,i,k,l,v=0,x;
    string  s;
    cin>>n;
    ll a[n];
    map<int ,int > mp;
    priority_queue<int>q;

    for(i=0; i<n; i++)
    {
        cin>>a[i];
        mp[a[i]]=i+1;
    }
    sort(a,a+n);
    cin>>s;

    for(i=0; i<2*n; i++)
    {
        if(s[i]=='0')
        {
            printf("%d ",mp[a[v]]);
            q.push(a[v]);
            v++;
        }
        else
        {
            x=q.top();
            printf("%d ",mp[x]);
            q.pop();
        }
    }

    return 0;
}
*/


