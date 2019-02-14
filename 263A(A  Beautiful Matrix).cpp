#include<bits/stdc++.h>
using namespace std;

void read_arr(int Array[10][10],int r,int c){
    int i,j;
    for(i=1;i<=r;i++){
    for(j=1;j<=c;j++){  scanf("%d",&Array[i][j]);  }}}

struct location   {   int x;   int y;  };

int main()
{
    int temp = 0;
    location l;
    int a,b,c=5,d,m,n,i,j,Array[10][10],m2[10][10],cnt=0,r=5,N=5,M=5;
//cin>>i,j;
    read_arr(Array,r,c);

    for(int i = 1; i <=5; i++)
        for(int j = 1; j<=5; j++)
            if(temp < Array[i][j])
            {
                temp = Array[i][j];
                l.x = i;
                l.y = j;
            }
          //  cout<<"Maximum Value is "<<temp<<" And is found at ("<<fabs(l.x-3)+fabs(l.y-3)<<")";
          cout<<fabs(l.x-3)+fabs(l.y-3)<<endl;
//system("pause");
}
