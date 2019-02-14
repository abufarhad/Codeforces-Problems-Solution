//! Bismillahi-Rahamanirahim.
/** ========================================**
 ** @Author: Md. Abu Farhad ( RUET, CSE'15)
 ** @Category:
/** ========================================**/

#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

#define ll long long
#define fr(i,n)           for(int i=0;i<n;i++)
#define fr1(i,n)         for(ll i=1;i<=n;i++)
#define frrev(i,a,b)   for(int i=a;i>=b;i--)
#define scl(x)           scanf("%lld",&x)
#define pfl(x)           printf("%lld\n",x)
#define ps                printf(" ")
#define pn                printf("\n")
#define sortD(a)       sort(a,a+n,greater<int>())
#define sortA(a)       sort(a,a+n)
#define pb(x)            push_back(x)
#define ppb(x)          pop_back(x)
#define pf(x)            push_front(x)
#define ppf(x)          pop_front(x)
#define MOD           10000007
#define Pi                 2*acos(0.0)
#define ms(a,b)         memset(a, b, sizeof(a))
#define scc(x)           scanf("%[^\n]s",x); // For charecter string input , It will  read all charecter untill Enter new line .
#define TEST_CASE(t)     for(int z=1;z<=t;z++)
#define PRINT_CASE       printf("Case %d: ",z)
#define infinity          (1<<28)
#define EPS              10E-10

///string charecter frequency --->
// for(i=0;i<s.length();i++) {  cnt[s[i]-'a']++; }

// cout << fixed << setprecision(2);


int main()
{

    ll m,n,t,b,c,d,i,j,k,x,y,z,l,ans;
    ll pr,kr=0,pg,kg=0,pb,kb=0,py,ky=0;
    string s;
    cin>>s;
    l=s.length();
    fr(i,l)
    {
        if(s[i]=='R') pr=i%4;
        if(s[i]=='G') pg=i%4;
        if(s[i]=='B') pb=i%4;
        if(s[i]=='Y') py=i%4;
    }
     cout<<pr<<" "<<pb<<" "<<py<<" "<<pg<<endl;

    fr(i,l)
    {
        if(s[i]=='!')
        {
            if(pr==i%4)kr++;
             else if(pg==i%4)kg++;
              else if(pb==i%4)kb++;
               else if(py==i%4)ky++;
        }
    }

    cout<<kr<<" "<<kb<<" "<<ky<<" "<<kg<<endl;

return 0;
}
