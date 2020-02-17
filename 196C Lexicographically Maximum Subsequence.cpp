#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

#define ll                  long long
#define scl(n)              cin>>n;
#define scc(c)	            cin>>c;
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define pfl(x)              printf("%lld\n",x)
#define pb                  push_back
#define l(s)                s.size()
#define asort(a)            sort(a,a+n)
#define all(x) 	            (x).begin(), (x).end()
#define dsort(a)            sort(a,a+n,greater<int>())
#define vasort(v)           sort(v.begin(), v.end());
#define vdsort(v)           sort(v.begin(), v.end(),greater<int>());
#define uniquee(x)          x.erase(unique(x.begin(), x.end()),x.end())
#define pn                  cout<<endl;


int main()
{
    //fast;
    ll t;
    ll m,n,b,c,d,i,j,k,x,y,z,l,q,r;
    string s, s1, s2, s3, s4;

     cin>>s1;
     char ch='0';
     reverse(all(s1));

    fr(i, l(s1))
    {
        ch=max(ch, s1[i]);
        if(ch==s1[i]) s+=s1[i];
    }
    reverse(all(s));
    cout<<s<<endl;
return 0;
}
