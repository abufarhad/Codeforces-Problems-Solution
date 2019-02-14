#include <bits/stdc++.h>
using namespace std;

// Function to find if count
// of divisors is even or
// odd
int  countDivisors(int n)
{
    int root_n = sqrt(n);

    // If n is a perfect square,
    // then it has odd divisors
    if (root_n * root_n == n)
        printf("Odd\n");
    else
        printf("Even\n");
}

// Driver Code
int main()
{
int i;
   for( i=1;i<=100;i++)
    printf("%d, %d\n",i,countDivisors(i)) <<endl;
    return 0;
}
