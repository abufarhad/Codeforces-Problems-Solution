

/* Not  complete  yet */

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
#define md                  10000007
#define inf                 1e18
#define debug               cout<<"Monti valo nei "<<endl;
#define ps                  cout<<" ";
#define Pi                  acos(-1.0)
#define mem(a,i)            memset(a, i, sizeof(a))
#define tcas(i,t)           for(ll i=1;i<=t;i++)
#define pcas(i)             cout<<"Case "<<i<<": "<<"\n";
#define fast 	ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)

#define conv_string(n)	to_string(n)
#define N 100006

ll to_int(string s)
{
    //cout<<s[0]<<" "<<s[1]<<endl;
    ll num=0, i=0;
    while(i<s.size())
    {
        num=num*10+(s[i]-'0');
        i++;
        //cout<<num<<endl;
    }
    return num;
}



int main()
{
    fast;
    ll t;
    ll m,n,b,c,d,i,j,k,x,y,z,l,q,r;

    while(1){
    string s,s1, s2, s3, s4, num;

    ll cnt=0,ans=0,sum=0;

    getline(cin, s);
   // cout<<s.size()<<endl;
    //fr(i, s.size()-1)cout<<s[i]<<"  ";//<<s[i+1]<<endl;

    ll pos=0, neg=0, qus=0;

    for(i=0; i<l(s); i++){if(s[i]=='-')neg++; if(s[i]=='+')pos++; if(s[i]=='?')qus++;}// cout<<s[i]<<" "<<s[i+1]<<endl;

    for(i=l(s)-1; i>=0 ;i--)
    {
        if(s[i]!='=')num+=s[i];
        else break;
    }
    reverse(num.begin(), num.end());


    for(i=1;i<num.size();i++)s1+=num[i];

    n=to_int(s1);

    cout<<pos<<" "<<neg<<" "<<qus<<" "<<s1<<" "<<n<<endl;
    ll bosabo=qus-1, cn=0;
    //pos++;

    fr1(i, l(s)-1)
    {
        if(s[i]=='=')break;
        if(s[i]=='?')s[i]='1', cnt++;
    }

    ll tmp=pos-neg;

    ll baki=n-abs(tmp);
    cout<<tmp<<" "<<baki<<endl;

    if(pos+1==neg )baki=n;

    ll tt=baki+ tmp;
    cout<<tt<<endl;

    if(pos+1==neg and n==1)cout<<"impossible"<<endl;
    else if( pos+1==neg  or  pos+1+neg==qus or  ( tt==n ) )
    {
        cout<<"Possible"<<endl;
        cout<<baki;
        fr1(i, l(s)-1)s2+=s[i];
        cout<<s2<<endl;
    }
    else cout<<"impossible"<<endl;


    }

return 0;
}
