#include <stdio.h>

/*
1 + 2 + 3 + ... + n = n(n+1)/2 (common sum formula)

1^2 + 2^2 + 3^2 + ... + n^2 = n(n + 1)(2n + 1)/6 (https://www.wolframalpha.com/)
*/

long long pos_sum(int n){ // Assume that n>0
    return (long long)n*(n+1)/2;
}

long long sqrs_of_sum(int n){
    return (long long)n*(n + 1)*(2*n + 1)/6;
}

int main(){
    int t; 
    scanf("%d",&t);
    for(int a0 = 0; a0 < t; a0++){
        int n; 
        scanf("%d",&n);
        long long sum = pos_sum(n);
        long long sum_of_sqrs = sum * sum;
        printf("%lld\n", sum_of_sqrs - sqrs_of_sum(n));
    }
    return 0;
}
