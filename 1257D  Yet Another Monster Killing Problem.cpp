#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    scanf("%d", &t );
    while( t-- )
    {
        int n;
        scanf("%d", &n );
        vector< int > a ( n );

        int mxm = 0, mxh = 0;
        for( int i = 0; i < n; ++ i )
        {
            scanf("%d", &a[i] );
            mxm = max( mxm, a[i] );
        }

        int m;
        scanf("%d", &m );
        vector< pair<int,int> > h( m );
        for( int i = 0; i < m; ++ i )
        {
            scanf("%d %d", &h[i].first, &h[i].second );
            mxh = max( mxh, h[i].first );
        }

        if( mxm > mxh )
        {
            puts("-1");
            continue;
        }

        sort( h.begin(), h.end() );

        vector < pair<int,int> > vh;

        for( auto it : h )
        {
            while( vh.size() && it.second >= vh.back().second )
                vh.pop_back();
            vh.push_back( it );
        }
        cout<<vh.size()<<endl;
        //fr(i,vh.size())cout<<vh[i]<<" ";  cout<<endl;

        int ans = 0;

        int mt = 0;
        while( mt < n )
        {
            int mx = 0, cn = 0;
            while( mt < n )
            {
                mx = max( mx, a[mt] );
                auto it = * (lower_bound( vh.begin(), vh.end(), make_pair(mx, -1) )) ;
                if( it.second <= cn )
                    break;
                ++cn;
                ++mt;
            }
            ++ans;
        }
        printf("%d\n", ans );
    }
    return 0;
}
