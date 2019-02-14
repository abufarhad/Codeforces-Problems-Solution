#include<bits/stdc++.h>
using namespace std;
int main(){
long long m,n,k,p;
   cin>>n>>m;
 if(m<=((n+1)/2)) p=2*m-1;
    else p=2*(m-(n+1)/2);
cout<<p;
return 0;
}

