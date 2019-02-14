#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    int n,x=0;
    cin>>n;
   while(n--){
   cin>>s;
    if(s[0]=='+'||s[1]=='+')
      x++;
       //cout<<x<<endl; }
    else
        x--;}
        cout<<x<<endl;

        //cout<<x;
return 0;
}
