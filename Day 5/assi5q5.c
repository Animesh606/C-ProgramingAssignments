#include <stdio.h>

int HCF(int a, int b) {
    if (a < b) 
        return HCF(b, a);
    if (a%b == 0)
        return b;
    else 
        return HCF(b, a%b);
}
int main() {
    int n1, n2;
    printf("Enter the first number: \n");
    scanf("%d", &n1);
    printf("Enter the second number: \n");
    scanf("%d", &n2);
    printf("The HCF of %d and %d is %d \n", n1, n2, HCF(n1, n2));
    return 0;
}