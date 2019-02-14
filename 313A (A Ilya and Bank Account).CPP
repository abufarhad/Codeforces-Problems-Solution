#include<iostream>
using namespace std;
int main()
{
    int i,j,k,l,m;
    string n;
    cin>>n;
    l=n.length();
    if(n[0]!='-')
    {
        cout<<n<<endl;
    }
   else
    {
       if(n[l-1]-'0' >= n[l-2]-'0') { n.erase(n.begin()+(l-1)); if(n=="-0") cout<<n[1]<<endl; else cout<<n<<endl;}
       else {n.erase(n.begin()+(l-2) ); if(n=="-0") cout<<n[1]<<endl; else  cout<<n<<endl;}
    }

    return 0;
}

