#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
#define ll                  long long
#define scl(n)              scanf("%lld", &n)
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define pfl(x)              printf("%lld\n",x)
#define endl 	            "\n"
#define pb                  push_back


/*
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a, b, c, d;
	cin>>a>>b>>c>>d;

	if(a==c || b==d)
		cout<<a+abs(b-d)<<" "<<b+abs(a-c)<<" "<<c+abs(b-d)<<" "<<d+abs(a-c);
	else if(a+b==c+d || a-b==c-d)
		cout<<a<<" "<<d<<" "<<c<<" "<<b;
	else
		cout<<-1;
}
*/



ll a1,a2, x1,x2,y1,y2,b1,b2;
int main()
{
    ll m,n,t,a,b,c,d,i,j,k,x,y,z,l,q,r;
      ll cnt=0,ans=0;
      cin>>x1>>y1>>x2>>y2;

      if( x1!=x2 && y1!=y2 && abs(x1-x2) !=abs(y1-y2))  cnt=1;
      else if(x1==x2)
      {
          a1=x1+abs(y1-y2) , a2=y1;
          b1=x2+abs(y1-y2) ,b2=y2;
      }
      else if( y1==y2)
      {
          a1=x1,a2=y1+abs(x1-x2);
          b1=x2,b2=y2+abs(x1-x2);
      }
      else
      {
        cout<<x1<<" "<<y2<<" "<<x2<<" "<<y1<<endl; return 0;
      }

      if(cnt)cout<<-1<<endl;
      else cout<<a1<< " "<<a2<<" "<<b1<<" "<<b2<<endl;

return 0;
}


