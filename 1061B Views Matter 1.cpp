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


//i64 bigmod(i64 num,i64 n){if(n==0)return 1;i64 x=bigmod(num,n/2);x=x*x%mod;if(n%2==1)x=x*num%mod;return x;}

//i64 modinverse(i64 num){return bigmod(num,mod-2)%mod;}

//i64 po(i64 a,i64 b){i64 ans=1;while(b--)ans *= a;return ans;}

//i64 ncr(i64 n,i64 r){if(n==r)return 1;if(r==1)return n;if(dp[n][r]!=-1)return dp[n][r];return dp[n][r]=ncr(n-1,r)+ncr(n-1,r-1);}

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

#define ms(a,b)                      memset(a, b, sizeof(a))
#define scc(x)                        scanf("%[^\n]s",x); // For charecter string input , It will  read all charecter untill Enter new line .
#define TEST_CASE(t)          for(int z=1;z<=t;z++)
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



int main()
{

    ll m,n,t,b,c,d,i,j,k,x,y,z,l,ans=0;
    scl(t);

    for(x=1; x<=t; x++)
    {
      ll cnt=0;
        scl(n);
        ll  a[n];
       for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        printf("Case %lld: %lld\n",x,ans);
        pfl(ans);
    }

return 0;
}






int main()
{

    ll m,n,t,b,c,d,i,j,k,x,y,z,l,ans=0;
    scl(t);

    for(x=1; x<=t; x++)
    {
      ll cnt=0;
        scl(n),scl(m);
        ll  a[n];
       for(i=0;i<n;i++)
        {
            cin>>a[i];
            mx=max(mx,a[i]);
        }
        sort(a,a+n);
        for(i=n-2;i>=abs(n-mx);i--)
        {
            if(a[i]>1)sum+=(a[i]-1);
        }

        printf("Case %lld: %lld\n",x,ans);
        pfl(ans);
    }

return 0;
}




