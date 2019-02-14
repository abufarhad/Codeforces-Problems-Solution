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


int main()
{
    ll m,n,t,b,c,d,i,j,k,x,y,z,l,q,r,cnt=0,cntt;
    vector<char>v;

     string s,s1,s2,s3,s4;
     while(cin>>s>>n){
     cnt=0,cntt=0;
     fr(i,s.size()) if(s[i]=='?' || s[i]=='*')cnt++;
     fr(i,s.size()) if( s[i]=='*')cntt++;
     fr(i,s.size()) if(s[i]=='?' || s[i]=='*'); else s2+=s[i];

     l=s.size()-cnt;
     ll remove_krteparbo=l-cnt;

    // cout<<s2<<" "<<s.size()<<" "<<l<<" "<<cnt<<endl;

     if(cnt==0) { if(n!=s.size())  cout<<"Impossible"<<endl; else cout<<s2<<endl;}
     else if(cntt==0 && l<n){ cout<<"Impossible"<<endl;}
     else if(cnt!=0 && l==n){  cout<<s2<<endl;}
     else if(cnt!=0 && remove_krteparbo>n)cout<<"Impossible"<<endl;
     else if(cnt!=0 && l>n)
     {
        z=l-n;
        //cout<<z<<endl;
        fr(i,s.size())
        {
            if(  s[i]=='?' || s[i]=='*'){ z--; s.erase(s.begin()+(i-1) ); }
            if(z==0)break;
        }
        //cout<<s<<endl;
     fr(i,s.size()) if(s[i]=='?' || s[i]=='*'); else s3+=s[i];
     cout<<s3<<endl;
     }
     else if(cnt!=0 && (n>l))
     {
         x=n-l;
         for(i=1;i<s.size();i++)
         {
            if(s[i]=='*'){ { while(x--) v.pb(s[i-1]); y=i-1; } break;}
         }

         fr(i,v.size())s3+=v[i];
         //cout<<s2<<" "<<s3<<" "<<y<<endl;
         s.insert(y, s3);
         fr(i,s.size()) if(s[i]=='?' || s[i]=='*'); else s4+=s[i];
         cout<<s4<<endl;
     }


v.clear(), s.clear(), s1.clear(),s2.clear(),s3.clear(),s4.clear();

     }
return 0;
}




