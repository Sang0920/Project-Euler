#include <stdio.h>

unsigned long long evenFibonacciSum(long n)
{
    if (n <= 2)
        return 0;

    unsigned long long fib1 = 2;
    unsigned long long fib2 = 8;
    unsigned long long sum = fib1;

    while (fib2 <= n)
    {
        sum += fib2;

        unsigned long long fib3 = 4 * fib2 + fib1;
        fib1 = fib2;
        fib2 = fib3;
    }

    return sum;
}

int main(){
    int t; 
    scanf("%d",&t);
    for(int a0 = 0; a0 < t; a0++){
        long n; 
        scanf("%ld",&n);
        printf("%lld\n", evenFibonacciSum(n));
    }
    return 0;
}
