//! Bismillahi-Rahamanirahim.
/** ========================================**
 ** @Author: Md. Abu Farhad ( RUET, CSE'15)
 ** @Category:
/** ========================================**/
#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
#define ll                  long long
#define scl(n)              scanf("%lld", &n)
#define scc(c)	            scanf(" %c", &c);
#define fr(i,n)             for (ll i=0;i<n;i++)

int main()
{
    ll m,n,t,b,c,d,i,j,k,x,y,z,l,q,r;

    cin>>m>>n;
    if(m==n  )cout<<m*10<<" "<<n*10 +1 <<endl;
    else if(m<n and n-m ==1   )cout<<m<<" "<<n<<endl;
    else if(m>n and n*10-m==1)cout<<m<<" "<<n*10<<endl;
    else cout<<-1<<endl;

return 0;
}
