#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll i , j ;
    double m, n, a, b, R, r, x1, y1, x2, y2, x_a, y_a , s;

    cin>>R>>x1>>y1>>x2>>y2;

    //Proof & Explanation : https://codeforces.com/blog/entry/57889?#comment-416077

    double dis_xy=(x1-x2)*(x1-x2)  +  (y1-y2)*(y1-y2);
    dis_xy=sqrt(dis_xy);

    //cout<<dis_xy<<endl;

    if(x1==x2 and y1==y2)
    {
        r=R/2;
        x_a=x1+r , y_a=y1;
         printf("%.10lf %.10lf %.10lf\n", x_a, y_a, r);
    }
    else if(dis_xy >= R)
    {
        x_a=x1, y_a=y1, r=R;
        printf("%.10lf %.10lf %.10lf\n", x_a, y_a, r);
    }
    else
    {

        s=(R+dis_xy)/2;

        x_a=s* ((x1-x2)/dis_xy)  + x2;
        y_a=s* ((y1-y2)/dis_xy)  + y2;

        printf("%.10lf %.10lf %.10lf\n", x_a, y_a, s);
    }



}
