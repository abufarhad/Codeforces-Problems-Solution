#include <bits/stdc++.h>
using namespace std;


string go(string s)
{
    if(s.size()%2)return s;

    string half1=go(s.substr(0 , s.size()/2 ) );
    string half2=go(s.substr(s.size()/2  ) );

    if(half1<half2)return half1+half2;
    else return half2+half1;
}



int main()
{
    string s1, s2 ;
    cin >> s1 >> s2;

    //finding lexicographically smallest string for both case using given condition
    if( go( s1 ) == go( s2 ) ) cout<<"YES"<<endl;
    else cout << "NO";
    return 0;
}
