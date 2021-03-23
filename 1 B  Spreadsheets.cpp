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
#define scf(n)              scanf("%lf", &n)
#define pfl(x)              printf("%lld\n",x)
#define md                  10000007
#define pb                  push_back
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define asort(a)            sort(a,a+n)
#define dsort(a)            sort(a,a+n,greater<int>())
#define pn                  printf("\n")
#define debug               printf("I am here\n")
#define ps                  printf(" ")

map <ll,char>mp1;
map <char,ll>mp2;

void call()
{
    ll i;
    char c;
    mp1[0]='Z';
    for(i=1,c='A';i<=25;i++,c++)mp1[i]=c;
    for(i=1,c='A'; c<='Z' ; i++,c++) mp2[c]=i;
}

string row,col,col1,s;
ll id,i,col2;

void frm1()
{
    for( i=1; s[i]!='C';i++) row+=s[i];
    for(ll j=i+1;j<s.size();j++) col+=s[j];
    //cout<<row<<" "<<col<<endl;
}
string  solve1()
{

    ll num,k;
    stringstream ss(col);
    ss>>num;

    while(num)
    {
        k=num%26;
        col1+=mp1[k];
        if(k==0) {num=(num/26)-1; }
        else num/=26;
    }
    reverse(col1.begin(), col1.end());
    return col1;
}


void frm2()
{
    fr(i,s.size())
    {
        if((s[i]>='A' && s[i]<='Z'))col+=s[i];
        else row+=s[i];
    }
   //cout<<col<<" "<<row<<endl;
}
ll solve2()
{
    ll k;
    col2=mp2[s[0]];
    fr1(i,col.size()-1)
    {
        k=col2*26;
        col2=k+mp2[s[i] ];
    }
    return col2;
}


int main()
{
    ll m,n,t,b,d,i,j,k,x,y,z,l,q,r;

      ll cnt=0,ans=0;


      call();
      scl(n);
      while(n--)
      {
      col.clear(),col1.clear(),row.clear();
      ll sol=0;
      cin>>s;


        if(s[0]=='R' && (s[1]>='1' && s[1]<='9'))
        {
            sol=0;
            fr(i,s.size()){if(s[i]=='C'){sol=1;break;}}
        }

       //cout<<sol<<endl;
        if(sol==1)
        {
            frm1();
            solve1();
            cout<<col1<<row<<endl;
        }
        else
        {
            frm2();
            solve2();
            cout<<"R"<<row<< "C"<<col2<<endl;
        }
      }


return 0;
}
