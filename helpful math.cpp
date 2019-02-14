#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    //char a[100];
    int b[100];
    //gets(a);
    cin>>a;
    int i, j=0,len=0;
    int l = a.size();
    for(i=0 ; i<l ; i++){
           // if((a[i]>='1')||(a[i]<='100')){
       if(a[i]== '1'|| a[i]== '2' || a[i]=='3' ){
            int c = atoi(&a[i]);
            b[j]=c;
            j++;
            len++;
        }
    }
    sort(b,b+len);
    for(i=0;i<len;i++){
        cout<<b[i];
        if(i<len-1){
            cout<<"+";
    }}
  //  cout<<endl;
    return 0;
}
