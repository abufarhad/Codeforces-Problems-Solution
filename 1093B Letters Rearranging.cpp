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
#define scl(x)            scanf("%lld",&x)
#define pfl(x)            printf("%lld\n",x)
#define pn                 printf("\n")
#define debug           printf("I am here\n")
#define mp                make_pair
#define ppb                pop_back

#define ps                 printf(" ")

#define dsort(a)        sort(a,a+n,greater<int>())
#define asort(a)        sort(a,a+n)
#define mod             10000007
#define mx               (1<<28)
#define Pi                  2*acos(0.0)
string s,s1,s2,s3,c;
int main()
{
    char str1[1300], str2[1300];
    ll m,n,i,l,j;
    cin>>n;
    getline(cin,c);
    while(n--)
    {
        gets(str1);
        ll flag=0;

        ll len = strlen(str1);
        for(i=0; i < len ; i++)
        {
            if(str1[i] != str1[len-i-1])
            {
                flag = 1;
                break;
            }
        }
        ll cnt=0;

        fr(i,len)
        {
            if(str1[i]==str1[i+1])
                cnt++;
        }
        //cout<<len<<" "<<cnt<<endl;
        if(cnt+1==len)
        {
            cout<<"-1"<<endl;
        }
        else if (flag == 1 && (cnt+1)!=len)
        {
            cout<<str1<<endl;
        }
        else
        {
            ll l=strlen(str1);
            cout<<str1[l-1];

            for(i=0; i<l-1; i++) cout<<str1[i];

            cout<<endl;
        }

    }
}



