#include <bits/stdc++.h>
using namespace std;
int main(){
long long  i,n,j;
cin>>n;
pair<int,int> a[n];
for(i=0;i<n;i++){
cin>>a[i].first>>a[i].second;   }

sort(a,a+n);

for(i=0;i<n-1;i++){
    if((a[i].first<a[i+1].first)&&(a[i].second>a[i+1].second)){
        printf("Happy Alex"); return 0;
    }}
printf("Poor Alex");
return 0;
}
