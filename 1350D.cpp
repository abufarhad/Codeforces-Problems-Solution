#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long N, K, mx = 0;
    cin >> N >> K;
    if(K >= 2e5)
    {
        puts("-1");
        return 0;
    }
    for(long long i = 1 ; i * i <= N ; ++i)
        if(N % i == 0)
        {
            if(N / i >= K * (K + 1) / 2)
                mx = max(mx, i);
            if(i >= K * (K + 1) / 2)
                mx = max(mx, N / i);
        }
    if(mx == 0)
        puts("-1");
    else
    {
        N /= mx;
        for(int i = 1 ; i < K ; ++i)
        {
            N -= i;
            cout << i * mx << ' ';
        }
        cout << N * mx;
    }
    return 0;
}
