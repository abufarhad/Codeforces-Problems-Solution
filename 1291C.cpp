#include<bits/stdc++.h>
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int tt = 1;
    cin >> tt;
    while(tt--)
    {
        int n, m, k;
        cin >> n >> m >> k;
        vector<int> a(n+1);
        for(int i=1; i<=n; i++)
        {
            cin >> a[i];
        }

        k = min(k, m-1);
        int lim = (m-1-k);
        int ans = 0;

        for(int val_k = 0; val_k <= k; val_k++)
        {
            /// Inside fixed ones
            int tem1 = 1e9;
            for(int val_m = 0; val_m <= (m-1-k); val_m++)
            {
                /// Inside random ones
                int lf = (val_k + val_m + 1);
                int rg = (n - (m -1 - k) - k + val_k + val_m);

                cout<<lf<<" "<<rg<<" "<<a[lf]<<" "<<a[rg]<<endl;

                int tem2 = max(a[lf], a[rg]);
                tem1 = min(tem1, tem2);
                //cout << lf << " -> " << rg << endl;
            }
            cout<<endl;
            ans = max(ans, tem1);
        }


        cout << ans << endl;
    }
    return 0;
}
