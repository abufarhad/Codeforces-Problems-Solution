#include<bits/stdc++.h>
using namespace std;
int main()
{
  char s[101];
   while(gets(s)){
    for(int i=0; i<strlen(s); i++){
        s[i]=tolower(s[i]);
        if(s[i]=='a'||s[i]=='o'||s[i]=='y'||s[i]=='e'||s[i]=='u'||s[i]=='i')
            continue;
        else{
                cout<<"."<<s[i];
        }
    }
    cout<<endl;
   }
    return 0;
}
