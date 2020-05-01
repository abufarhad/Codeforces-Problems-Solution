#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long n,k,m;
	cin>>n>>k>>m;
	long long a[n];
	long long sum = 0;
	for(int i=0; i<n; i++)
	{
		cin>>a[i];
		sum += a[i];
	}
	sort(a,a+n);
	double cnt1 = 0,ans;
	for(int i=0; i< min(n,m+1); i++)
	{
	    cout<<sum<<" "<<min(k*(n-i),m-i)<<endl;
		ans = sum + min(k*(n-i),m-i);
		cout<<ans<<endl;

		ans /= (n-i);
		cnt1=max(cnt1,ans);
		sum -= a[i];
	}
	cout<<fixed<<setprecision(6)<<cnt1;
}
