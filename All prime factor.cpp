#include<bits/stdc++.h>
using namespace std;
void primefactor(int n)
{
    while(n%2==0)
    {
        cout<<"2"<<" ";
        n=n/2;
    }
    for(int i=3; i<sqrt(n); i=i+2)
    {
        while(n%i==0)
        {
            cout<<i<<" ";
            n=n/i;
        }
    }
    if(n>2)
    {
        cout<<n<<endl;
    }
}

int main()
{
    int n;
    cin>>n;
    primefactor( n);
    return 0;
}
