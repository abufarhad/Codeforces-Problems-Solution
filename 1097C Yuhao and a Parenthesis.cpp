
///**************** Unfinished ***************

#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;



#define ll                  long long
#define ull                 unsigned long long LL
#define scl(n)              scanf("%lld", &n)
#define scf(n)              scanf("%lf", &n)
#define pfl(x)              printf("%lld\n",x)
#define md                  10000007
#define pb                  push_back
#define mp                  make_pair
#define pp                  pair<LL,LL>
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define asort(a)            sort(a,a+n)
#define memo(a,b)           memset(a,b,sizeof(a))
#define inf                 1e9
#define EPS                 1e-8
#define Pi                  acos(-1.0)
#define dsort(a)        sort(a,a+n,greater<int>())

#define pn                printf("\n")
#define debug           printf("I am here\n")
#define ppb               pop_back
#define ps                 printf(" ")

int main()
{
    ll m,n ,i,j,k;
    string s,s1;
    cin>>n;
    vector<string>v;
    while(n--)
    {
        cin>>s;
        if(s[0]=='(' && s[s.size()-1]==')')ans=1;
        else if(s[0]==')' && s[s.size()-1]=='(');
        else if(s[0]==')' && s[s.size()-1]==')')v.pb(s);
        else if(s[0]=='(' && s[s.size()-1]=='(') v.pb(s);
    }
    fr(i,v.size())
    {
        s1=v[i];
        if(s1[0]=='(' )
        cout<<s1.size()<<" ";
    }

}
