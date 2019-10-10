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
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define pfl(x)              printf("%lld\n",x)
#define endl 	            "\n"
#define pb                  push_back
#define asort(a)            sort(a,a+n)
#define dsort(a)            sort(a,a+n,greater<int>())
#define vasort(v)         sort(v.begin(), v.end());
#define vdsort(v)         sort(v.begin(), v.end(),greater<int>());
#define pn                  printf("\n")
#define md                  10000007
#define debug               printf("I am here\n")
#define ps                  printf(" ")
#define l(s)                      s.size()
#define tcas(i,t)             for(ll i=1;i<=t;i++)
#define pcas(i)                printf("Case %lld: ",i)

string add(string a, string b)
{
    string c,d;
    if(a.size()<b.size())
        swap(a,b);

    ll gap=a.size()-b.size();

    while(gap)
    {
        c+='0';
        gap--;
    }
    c+=b;       /// if a=122, b=12 then firstly gap=1 and c=0. And now c=012, a=122;

    ll len=a.size(), carry=0;
    for(ll i=len-1; i>=0; i--)
    {
        ll x=(a[i]-'0')+(c[i]-'0');
        x+=carry;
        carry=x/10;
        x%=10;
        d+=(x+'0');    ///converted to string
    }
    if(carry)
        d+=49;

    reverse(d.begin(), d.end());
    return d;
}

int main()
{
    ll m,n,t,b,c,d,i,j,k,x,y,z,l,q,r,cnt=0,cn=0;

    string s,s2,s3,ss;
    scl(n);
    cin>>s;
    x=l(s);
    if(x%2==0)
    {
        fr(i,x/2)s2+=s[i];
        for(i=x/2; i<x; i++)
            s3+=s[i];

        //cout<<s2<<" "<<s3<<endl;
        ll sv;
        cnt=0;

        fr(i, l(s3))if(s3[i]=='0')
            cnt++;
        //pfl(cnt);

        if(l(s3)==cnt )
        {
            s2=s3="";
            for(i=x-1; i>0; i--)
            {
                s3+=s[i] ;
                if( s[i]!='0')
                {
                    sv=i;
                    break;
                }
            }
            // pfl(sv);
            //cout<<"s3 "<<s3<<endl;
            reverse(s3.begin(), s3.end());

            fr(i,sv)s2+=s[i];

            cout<<s2<<" - "<<s3<<endl;
            cout<<add(s2,s3)<<endl;
        }

        else
        {
            cout<<s2<<" - "<<s3<<endl;
            cout<<add(s2,s3)<<endl;
        }
    }
    else
    {
        fr(i,x/2 + 1)s2+=s[i];
        for(i=x/2 +1; i<x; i++)
            s3+=s[i];

        //cout<<s2<<" "<<s3<<endl;
        ll sv;
        cnt=0;
        fr(i, l(s3))if(s3[i]=='0')
            cnt++;
        if(l(s3)==cnt )
        {
            s2=s3="";
            for(i=x-1; i>0; i--)
            {
                s3+=s[i] ;
                if( s[i]!='0')
                {
                    sv=i;
                    break;
                }
            }
            //cout<<"s3 "<<s3<<endl;
            // pfl(sv);
            reverse(s3.begin(), s3.end());

            fr(i,sv)s2+=s[i];

            cout<<s2<<" - "<<s3<<endl;
            cout<<add(s2,s3)<<endl;
        }

        else
        {
            cout<<s2<<" - "<<s3<<endl;
            cout<<add(s2,s3)<<endl;
        }
    }
    return 0;
}

