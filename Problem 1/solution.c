#include <math.h>
#include <stdio.h>

/*
long sum35(int n){
    // Linear approach with O(n) time complexity
    
    if(n<3) return 0;
    long sum = 0;
    for (int i = 3; i<n; i+=3){
        sum += i;
    }
    for (int i = 5; i<n; i+=5){
        if(i%3 != 0){
            sum += i;
        }
    }
    return sum;
}
*/

long long sum35(int n){
    /*
    Using the arithmetic series with O(1) time complexity.
    The formula for the sum of an arithmetic series is:

    Sn = n/2 * (a + l)

    Where:

    Sn is the sum of the series.
    n is the number of terms in the series.
    a is the first term of the series.
    l is the last term of the series.
    */
    
    if (n < 3)
        return 0;

    n--;
    
    long long sum3 = 3LL * ((long long)(floor((double)n / 3)) * ((long long)(floor((double)n / 3)) + 1) / 2);
    long long sum5 = 5LL * ((long long)(floor((double)n / 5)) * ((long long)(floor((double)n / 5)) + 1) / 2);
    long long sum15 = 15LL * ((long long)(floor((double)n / 15)) * ((long long)(floor((double)n / 15)) + 1) / 2);


    return sum3 + sum5 - sum15;
}

int main(){
    int t; 
    scanf("%d",&t);
    for(int a0 = 0; a0 < t; a0++){
        int n; 
        scanf("%d",&n);
        printf("%lld\n", sum35(n));
    }
    return 0;
}
