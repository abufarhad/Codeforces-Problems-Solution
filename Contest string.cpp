#include<iostream>
using namespace std;
int main(){
    int m,i,cnt=0,cntt=0;
    char a[1000];
    //string a;
    cin>>m;
   //while(m--){
   for(i=0;i<m;i++){
        cin>>a;
         //for(i=0;i<m;i++){
        if(a[0]=='<') cnt++;
        else cntt++;
         }

//if((a[i]-a[i+1])==0) {cnt++; i++;
int c;
  c=cnt-cntt;
cout<<c;

return 0;
}
