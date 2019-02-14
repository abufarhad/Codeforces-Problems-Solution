//! Bismillahi-Rahamanirahim.
/** ========================================**
 ** @Author: Md. Abu Farhad ( RUET, CSE'15)
 ** @Category:
/** ========================================**/

#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;


#define ll                  long long
#define pb                 push_back
#define fr(i,n)           for (ll i=0;i<n;i++)
#define fr1(i,n)         for(ll i=1;i<=n;i++)
#define scl(x)           scanf("%lld",&x)
#define pfl(x)           printf("%lld\n",x)
#define pn                printf("\n")
#define debug           printf("I am here\n")
#define mp               make_pair
#define ppb               pop_back
#define ps                 printf(" ")
#define dsort(a)        sort(a,a+n,greater<int>())
#define asort(a)        sort(a,a+n)
#define mod             10000007
#define mx               (1<<28)
#define Pi                  2*acos(0.0)

#define frrev(i,a,b)    for(int i=a;i>=b;i--)
#define scl2(x,y)       scanf("%lld %lld",&x,&y)
#define pf(x)            push_front(x)
#define ppf(x)          pop_front(x)

#define ms(a,b)      memset(a, b, sizeof(a))
#define scc(x) scanf("%[^\n]s",x); // For charecter string input , It will  read all charecter untill Enter new line .
#define TEST_CASE(t)     for(int z=1;z<=t;z++)
#define PRINT_CASE       printf("Case %d: ",z)

int main()
{
    ll m,n,i,j,k,l;
    string s,s1,s2,s3,f;
    while(cin>>s)
    {
        l=s.size();
        n=l/2;
        if(l%2==0)
        {
            s3=s[n-1];


            for(i=n; i<l; i++)
                s1+=s[i];
            fr(i,n-1)s2+=s[i];
            reverse(s2.begin(), s2.end());
            j=0,k=0;
            fr1(i,s2.size()+s1.size())
            {
                if(i%2)
                {
                    s3+=s1[j];
                    j++;
                }
                else
                {
                    s3+=s2[k];
                    k++;
                }
            }

            //cout<<s1<<" "<<s2<<endl;

            cout<<s3<<endl;
            s.clear(),s1.clear(),s2.clear(),s3.clear();
        }
        else
        {
            s3=s[n];


            for(i=n+1; i<l; i++)
                s1+=s[i];
            fr(i,n)s2+=s[i];
            reverse(s2.begin(), s2.end());
            j=0,k=0;
            fr1(i,s2.size()+s1.size())
            {
                if(i%2)
                {
                    s3+=s1[j];
                    j++;
                }
                else
                {
                    s3+=s2[k];
                    k++;
                }
            }

            //cout<<s1<<" "<<s2<<endl;

            cout<<s3<<endl;
            s.clear(),s1.clear(),s2.clear(),s3.clear();
        }
    }
}
