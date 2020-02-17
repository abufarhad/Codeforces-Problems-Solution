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
#define uniquee(x)          x.erase(unique(x.begin(), x.end()),x.end())
#define pn                  printf("\n")
#define md                  10000007
#define inf                 1<<28
#define debug               printf("I am here\n")
#define ps                  printf(" ")
#define Pi                  acos(-1.0)
#define mem(a,i)            memset(a, i, sizeof(a))
#define tcas(i,t)           for(ll i=1;i<=t;i++)
#define pcas(i)             printf("Case %lld: ",i)
ll ccnt[50];

int main()
{
    ll m,n,t,b,c,d,i,j,k,x,y,z,l,q,r;
    cin>>t;
    while(t--)
    {
        ll cnt=0,ans=0;
        string s,s1;
        cin>>n>>s>>s1;
        mem(ccnt, 0);
        vector<pair<ll,ll> >v;
        char cc;
        fr(i, n)
        {
            ccnt[s[i]-'a' ]++;
            ccnt[s1[i]-'a' ]++;
        }
        fr(i,26)if(ccnt[i]%2) cnt=1;//cout<<ccnt[i]<<" "<<i<<endl,

        fr(i, n)
        {
            if(s[i]!=s1[i])
            {
                for(j=i+1; j<n; j++)
                {
                    if(s[i]==s[j])
                    {
                        v.pb(make_pair(j,i) );
                        swap(s[j], s1[i]);
                        //cout<<s<<" -1- "<<s1<<endl;
                        break;
                    }
                    else if(s[i]==s1[j])
                    {
                        v.pb(make_pair(j,j) );
                        swap(s[j], s1[j]);

                        //cout<<s<<" --- "<<s1<<endl;
                        v.pb(make_pair(j,i) );
                        swap(s[j], s1[i]);

                        //cout<<s<<" -2- "<<s1<<endl;
                        break;
                    }
                }
                //if(j>=n)cnt=1;
                //cnt++;
            }
        }



        //cout<<s<<" "<<s1<<" "<<cnt<<" "<<st.size()<<" "<<st1.size()<<endl;

        if(v.size()>0 and  v.size() <=2*n  and cnt==0)
        {
            cout<<"Yes"<<endl;
            cout<<v.size()<<endl;
            fr(i,v.size())   cout<<v[i].first+1<<" "<<v[i].second+1<<endl;
        }
        else   cout<<"No"<<endl;
    }

    return 0;
}


///Before submit=>
///    *check for integer overflow,array bounds
///    *check for n=1



