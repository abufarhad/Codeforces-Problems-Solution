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
#define scc(c)	            scanf(" %c", &c);
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define pfl(x)              printf("%lld\n",x)
#define pb                  push_back
#define l(s)                s.size()
#define asort(a)            sort(a,a+n)
#define all(x) 	            (x).begin(), (x).end()
#define dsort(a)            sort(a,a+n,greater<int>())
#define vasort(v)           sort(v.begin(), v.end());
#define vdsort(v)           sort(v.begin(), v.end(),greater<int>());

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll m,n,t,i,j,k,x,y,z,l,q,r;
        cin>>n>>k;
        string s, ans;
        cin>>s;
        queue<ll>zro;

        j=0;
        fr(i,n)  if(s[i]-'0' ==0 )zro.push(i);


        fr(i,n)
        {
            if(zro.empty())ans+="1";
            else
            {
                ll frnt =zro.front();
                cout<<frnt<<endl;
                ll need=frnt- i;
                if(need >k)ans+="1";
                else
                {
                    k-=need;
                    ans+="0";
                    zro.pop();
                }
            }
        }

        cout<<ans<<endl;
    }
    return 0;
}





