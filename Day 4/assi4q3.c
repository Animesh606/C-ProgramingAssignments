#include <stdio.h>

int reverseIntger(int n) {
    int rev = 0;
    while(n!=0) {
        rev = rev*10 + n%10;
        n = n/10;
    }
    return rev;
}
int main() {
    int num;
    printf("Enter the number: \n");
    scanf("%d", &num);
    printf("The reverse number of %d is %d\n", num, reverseIntger(num));
    return 0;
}