//bismillahir rahmanir rahim
#include <iostream>
#include <math.h>
#include <string.h>
#include <vector>
#include <stack>
#include <algorithm>
#include <queue>
#include <deque>
#include <set>
#include <map>
#include <cstdio>
#include <iterator>
#define                 ll                                  long  long
#define                 lf                                  double
#define                 pb(x)                               push_back(x)
#define                 ull                                 unsigned long long
#define                 sfl(a)                              scanf("%lld",&a)
#define                 sf(a)                               scanf("%d",&a)
#define                 pf(a)                               printf("%d\n",a)
#define                 pfl(a)                              printf("%lld\n",a)
#define                 pdl(a)                              printf("%llf\n",a)
#define                 FOR(x,n)                            for(int x=1;x<=n;++x)
#define                 vii                                 vector< ll > v
#define                 pi                                  3.14159265359
#define                 mex                                 10000000
#define                 pii                                 pair< ll , ll >
#define                 mem(m)                              memset( m, 0, sizeof m)
#define                 mp(a,b)                             make_pair(a,b)
#define                 maxn                                100000
#define                 mod                                 1000000007
#define 				INF									1e17
#define 				f1 									first
#define 				f2									second

using namespace std;

set < ll > s;

void findfactor( ll n ){

    for ( ll i = 2; i*i <= n; i++ ){

        if ( n % i == 0 ){

            s.insert ( i );

            while ( n % i == 0 ){

                n = n / i;
            }
        }
    }

    if ( n > 1 ) s.insert ( n );

}



int main(){

    ll n;

    sfl ( n );

    pii a[n+10];

    set < ll >::iterator it;

    for ( ll i = 0; i < n; i++ ){

        sfl ( a[i].f1 ) , sfl ( a[i].f2 );

    }

    findfactor( a[0].f1 );

    findfactor( a[0].f2 );


    cout<<s.size()<< " "<<n<<endl;

    for ( it = s.begin(); it != s.end(); ++it ){

        bool f  = true;

        for  ( ll i = 1; i < n; i++ ){

            if ( a[i].f1 % *it == 0 or a[i].f2 % *it == 0 ){

                continue;
            }

            else{

                f = false;

                break;
            }
        }

        if ( f ){

            pfl ( *it );

            return 0;
        }

    }

    printf("-1\n");


}










