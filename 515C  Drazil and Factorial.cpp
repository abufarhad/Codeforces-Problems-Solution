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

#define frrev(i,a,b)    for(int i=a;i>=b;i--)
#define scl2(x,y)       scanf("%lld %lld",&x,&y)
#define pf(x)            push_front(x)
#define ppf(x)          pop_front(x)

int main()
{
    ll m,n,t,b,c,d,i,j,k,x,y,z,l,q;
    scl(n);
    string s,ans;
    cin>>s;
    fr(i,s.size())
    {
        if(s[i]=='1' )continue;
        else if(s[i]=='2' )ans+="2";
        else if(s[i]=='3' )ans+="3";
        else if(s[i]=='4' )ans+="322";
        else if(s[i]=='5' )ans+="5";
        else if(s[i]=='6' )ans+="53";
        else if(s[i]=='7' )ans+="7";
        else if(s[i]=='8' )ans+="7222";
        else if(s[i]=='9' )ans+="7332";
    }
    sort( ans.begin(),ans.end());
    reverse(ans.begin(),ans.end() );
    cout<<ans<<endl;

}



