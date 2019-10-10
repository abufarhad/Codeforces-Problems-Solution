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
#define scc(c)	    scanf(" %c", &c);
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define pfl(x)              printf("%lld\n",x)
#define endl 	            "\n"
#define pb                  push_back


int main()
{
    ll m,n,i,j,k,t;
    scl(t);
    while(t--)
    {
        vector<char>v, v1;
        string s1,s2;
        cin>>s1>>s2;
        ll cnt=0;
        fr(i, s1.size())  v.pb(s1[i]), v1.pb(s2[i]);

        sort(v.begin(), v.end()), sort(v1.begin(), v1.end());

        fr(i, v.size())
        {
            fr(j, v1.size())
            {
                if(v[i]==v1[j] ){cnt=1; break;}
            }
        }

        if(cnt)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
