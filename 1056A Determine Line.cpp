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

#define frrev(i,a,b)    for(int i=a;i>=b;i--)
#define scl2(x,y)       scanf("%lld %lld",&x,&y)
#define pf(x)            push_front(x)
#define ppf(x)          pop_front(x)

#define ms(a,b)      memset(a, b, sizeof(a))
#define scc(x) scanf("%[^\n]s",x); // For charecter string input , It will  read all charecter untill Enter new line .
#define TEST_CASE(t)     for(int z=1;z<=t;z++)
#define PRINT_CASE       printf("Case %d: ",z)

#define EPS           10E-10
///string charecter frequency --->
// for(i=0;i<s.length();i++) {  cnt[s[i]-'a']++; }

// cout << fixed << setprecision(2);

/// ll  binarySearch( ll a[] , int l, int r, int x){ ll m, ans=-1; while (l <= r){ m = (l + r)/2;  if(a[m]== x){ ans=m; r=m-1;  }  else if (a[m] > x) r = m - 1; else   l = m + 1;} return ans; }

#define max3(a, b, c) max(a, b) > max(b, c) ? max(a, b) : max(b, c)
#define min3(a, b, c) min(a, b) < min(b, c) ? min(a, b) : min(b, c)


#define gcd(a, b)        __gcd(a, b)
#define lcm(a, b)        ((a)*((b)/gcd(a,b)))


/* int dx[] = {1,-1,0,0} , dy[] = {0,0,1,-1}; */ // 4 Direction
/* int dx[] = {1,-1,0,0,1,1,-1,-1} , dy[] = {0,0,1,-1,1,-1,1,-1}; */ // 8 Direction
/* int dx[] = {1,-1,1,-1,2,2,-2,-2} , dy[] = {2,2,-2,-2,1,-1,1,-1}; */ // Knight Direction
/* int dx[] = {2,-2,1,1,-1,-1} , dy[] = {0,0,1,-1,1,-1}; */ // Hexagonal Direction


ll cnt[100005];

int main()
{
    ll m,n,t,b,c,d,i,j,k,x,y,z,l,ans=0;
    vector<ll>v;
    scl(t);

    for(x=1; x<=t; x++)
    {
        ll cnt=0;
        scl(n);
        fr(i,n)
        {
            cin>>m;
            v.pb(m);
        }
    }
    fr(i,v.size())
    {
        cnt[v[i] ]++;
    }


    set<ll>s;
    set< ll > :: iterator it;
    fr(i,v.size())
    {
        if(cnt[v[i] ]==t) s.insert(v[i]);
    }// cout<<v[i]<<" ";}


    for(it = s.begin(); it != s.end(); it++)
    {
        cout << *it <<" ";
    }


    return 0;
}





