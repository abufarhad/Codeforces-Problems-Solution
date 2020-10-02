#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll i, j, k, n;
    string s, s1 , b;
    cin>>n>>k>>s;

    b=s;
    for(i=k ; i<n; i++) b[i]=b[i-k];


    if(b>=s)cout<<n<<endl<<b<<endl;
    else
    {
        for(i=k-1; i>=0; i--)
        {
            if(b[i]=='9' )b[i]='0';
            else
            {
                b[i]++;
                break;
            }
        }

        for(i=k ; i<n; i++) b[i]=b[i-k];

        cout<<n<<endl<<b<<endl;
    }
}
