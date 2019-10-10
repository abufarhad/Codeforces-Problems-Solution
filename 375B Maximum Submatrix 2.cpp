#include<bits/stdc++.h>
using namespace std;
int N, M, H, X, i, j, k, l, A[5000][5000];
char C;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>N>>M;
    for (i=0; i<N; i++)
    {
        for (j=0; j<M; j++)
        {
            cin>>C;
            A[j][i]=C-'0';
        }
    }
    for (i=0; i<N; i++)
    {
        for (j=1; j<M; j++)
        {
            if (A[j][i])
            {
                cout<<i<<" "<<j<<" "<<A[j][i]<<" "<<A[j-1][i]<<endl;
                A[j][i]+=A[j-1][i];
            }
        }
    }
    for (i=0; i<M; i++)
    {
        sort(A[i],A[i]+N);
        for (j=0; j<N; j++)
        {
            H=max(H,A[i][j]*(N-j));
        }
    }
    cout<<H<<'\n';
}
