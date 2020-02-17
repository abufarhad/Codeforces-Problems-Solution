#include<bits/stdc++.h>
#include<cstring>
using namespace std;
int n,m,b,mod;
int a[1010],f[1010][1010];
int main()
{
	scanf("%d%d%d%d",&n,&m,&b,&mod);
	for(int i=1;i<=n;i++) scanf("%d",&a[i]);
	for(int i=0;i<=b;i++) f[0][i]=1;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			for(int k=a[i];k<=b;k++)
			{
				f[j][k]=(f[j-1][k-a[i]]+f[j][k])%mod;
				cout<<"j "<<j<<" "<<"k "<<k<<" "<<k-a[i]<<" "<<f[j-1][k]<<" "<<f[j-1][k-a[i]]<<" "<<f[j][k]<<endl;
			}
		}
	}
	printf("%d",f[m][b]);
	return 0;
}
