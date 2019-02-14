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



int    main()
{
    ll m,n,q,i,j,k;
    string s,s1,s3;
    ll cnt=0,ans=0;
    scl(n);
    map<string, string>mp;
    map<string, int>freq;
    map<string, bool>mp1;

    for(i=0; i<n; i++)
    {
        cin>>s;
        fr(j,s.size())
        {
            for(k=j; k<s.size(); k++)
            {
                string s2="";
                for(ll l=j;l<=k;l++)s2+=s[l];
                //cout<<s2<<endl;

                mp[s2]=s;

                if(mp1[s2]==false)
                {
                    freq[s2]++, mp1[s2]=true;
                }
            }
        }
        mp1.clear();
    }

        cin>>q;
        while(q--)
        {
            cin>>s3;
            if(freq[s3]==0)cout<<"0"<<" "<<"-"<<endl;
            else cout<<freq[s3]<<" "<<mp[s3]<<endl;
        }

        return 0;
    }




