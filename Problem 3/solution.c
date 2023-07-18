#include <stdio.h>
#include <stdbool.h>

bool is_palindrome(int n){
    int reverse = 0, num = n;
    while(num!=0){
        reverse = reverse*10 + num%10;
        num/=10;
    }
    return reverse == n;
}

int largest_palindrome(int n){
    int num, max=0;
    for (int i = 999; i>=100; i--)
        for(int j = 999; j>=100; j--){
            num = i*j;
            if(num<n && is_palindrome(num)){
                max = num>max?num:max;
            }
        }
    return max;
}

int main(){
    int t; 
    scanf("%d",&t);
    for(int a0 = 0; a0 < t; a0++){
        int n; 
        scanf("%d",&n);
        printf("%d\n", largest_palindrome(n));
    }
    return 0;
}
