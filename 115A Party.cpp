#include <bits/stdc++.h>
using namespace std;
int c1[100009];
int c2[100009];
int c3[100009];
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        while (n--)
        {
            int a, b, c;
            cin >> a >> b >> c;
            c1[a] = 1;
            c2[b] = 2;
            c3[c] = 3;
        }
        set<int>answer;
        for (int i = 1; i <= n + 1; i++)
        {
            if (c1[i] != 0 || c2[i] != 0 || c3[i] != 0)
            {
                if (c1[i] != 0)
                {
                    answer.insert(c1[i]);
                }
                if (c2[i] != 0)
                {
                    answer.insert(c2[i]);
                }
                if (c3[i] != 0)
                {
                    answer.insert(c3[i]);
                }
                break;
            }
        }
        cout << answer.size() << endl;
        for (int i = 0; i <= 100008; i++)
        {
            c1[i] = c2[i] = c3[i] = 0;
        }

    }
    return 0;

}
