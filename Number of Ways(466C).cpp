#include<iostream>
using namespace std;
long long  a[500005],n,ans,x;
int main(){
cin>>n;
for(int i=0;i<n;i++){cin>>a[i];a[i]=a[i-1]+a[i];
//cout<<a[i]<<" ";
}
//cout<<endl;

for(int i=0;i<n-1;i++){
if(a[i]*3==a[n-1]*2)ans+=x;
//cout<<a[i]*3<<" "<<a[n-1]*2<<" "<<ans<<endl;
if(a[i]*3==a[n-1])x++;
//cout<<a[i]*3<<" "<<a[n-1]<<" "<<x<<endl;
}
cout<<ans;
}
