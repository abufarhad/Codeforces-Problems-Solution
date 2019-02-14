#include<bits/stdc++.h>
using namespace std;
     int n,m;


int check(int a){
    if(a==2)return 0;
    for(int i=2;i*i<=a;i++)
        if(a%i==0)return 1;
    return 0;  }

int main(){
int i,n; cin>>n;
for(i=2;i<n;i++)
if(check(i)&&check(n-i)){//cout<<endl<<i<<" " <<n-i; return 0;
printf("%d %d\n",i,n-i); return 0;
}
return 0;
}

///***********
//cin>>n;
//    if(n%2){
//        printf("%d %d\n",9,n-9);
//    }else{
//        printf("%d %d\n",8,n-8);
//    }

///***********
// int  check(int x){
//     if(x==2) return 0;
//     for(m=2;m*m<=x;m++)
//     if(x%m==0)  return 1 ;
//      return 0;  }
//int isComposite(int a){
//    if(a==2)return 0;
//    for(int i=2;i*i<=a;i++)
//        if(a%i==0)return 1;
//    return 0;
//}
//
//int main(){
//    int a,n;
//    scanf("%d",&n);
//    for(a=2;a<n;a++)
//        if(isComposite(a)&&isComposite(n-a)){
//            printf("%d %d",a,n-a);
//            break;
//        }
//    return 0;
//}
