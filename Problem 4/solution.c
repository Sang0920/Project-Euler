#include <stdio.h>

int gcd(int a, int b){
    if(a == 0) return b;
    return gcd(b%a, a);
}

long smallest_multiple(int n){
    long out = 1;
    for (int i = 1; i<=n; i++){
        out = (out*i)/gcd(out, i);
    }
    return out;
}

int main(){
    int t; 
    scanf("%d",&t);
    for(int a0 = 0; a0 < t; a0++){
        int n; 
        scanf("%d",&n);
        printf("%ld\n", smallest_multiple(n));
    }
    return 0;
}
