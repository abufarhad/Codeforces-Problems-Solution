#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long  i,j,m,n,b,cnt1=0,cnt2=0,ans1,ans2,l;
    cin>>n;
    long long  a[n];
    //cin>>l;
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);

    int cn;

   for(i=0; i<n; i++)
        {
            ans1 = a[n-1] - a[0];
            if(a[0]==a[i])
                cnt1++;
            if(a[n-1]==a[i])
                cnt2++;
        }
        if(cnt1==n)
            ans2 = (cnt1*(cnt1-1))/2;
        else
            ans2 = (cnt1*cnt2);
        cout << ans1 << " " << ans2 << endl;

    return 0;
}
