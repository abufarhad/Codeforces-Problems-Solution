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

int main()
{
    ll m,n,i,j,k,l,r,cnt;
    string s,s1;
    cin>>s;
    scl(n);
    while(n--)
    {
        m=0,s1="";
        cin>>l>>r>>cnt;
        if(l==r)
            continue;
        else
        {
            ll sz=s.size();
            int d=cnt%(r-l+1);
            //cout<<d<<endl;
            if(d>0)
            {
                for(i= r-1; i>=l-1; i-- )
                {
                    s1+=s[i];
                    m++;
                    if(m==d)
                        break;
                }

                reverse(s1.begin(), s1.end());
                //cout<<s1<<endl;

                s.insert(l-1, s1);
                //cout<<s<<endl;
                fr(i,d)
                {
                    s.erase(s.begin()+(r+d-1 ) );
                    r--;
                }
            }
        }
    }

    cout<<s<<endl;

}
