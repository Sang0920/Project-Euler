#include <math.h>
#include <stdio.h>

long largest_prime_factor(long n){
    long largestDivisor = 0;
    while (n % 2 == 0) {
        largestDivisor = 2;
        n /= 2;
    }
    long divisor = 3;
    long sqrtN = sqrt(n);
    while (n > 1 && divisor <= sqrtN) {
        if (n % divisor == 0) {
            largestDivisor = divisor;
            n /= divisor;
            sqrtN = sqrt(n);
        } else {
            divisor += 2;
        }
    }
    if (n > 1) {
        largestDivisor = n;
    }
    return largestDivisor;
}

int main(){
    int t; 
    scanf("%d",&t);
    for(int a0 = 0; a0 < t; a0++){
        long n; 
        scanf("%ld",&n);
        printf("%lu\n", largest_prime_factor(n));
    }
    return 0;
}
