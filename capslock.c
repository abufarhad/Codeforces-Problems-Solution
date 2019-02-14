#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int main() {
    int a;
    char s[105];
    a=0;
    scanf("%s", s);
    for(int i=0; i<strlen(s); i++) if(s[i]<91) a++;
    if(s[0]>96 && a==strlen(s)-1) {
        printf("%c", s[0]-32);
        for(int i=1; i<strlen(s); i++) printf("%c", s[i]+32);
    }
    else if(a==strlen(s)) for(int i=0; i<strlen(s); i++) printf("%c", s[i]+32);
    else printf("%s", s);
    return 0;
}
