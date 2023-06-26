#include <stdio.h>

int main() {
    int a, b;
    printf("Enter the 1st number: ");
    scanf("%d", &a);
    printf("Enter the 2nd number: ");
    scanf("%d", &b);
    int output = 0;
    while (a!=0 || b!=0)
    {
        if (a!=0) {
            output = output *10 + a%10;
            a = a/10;
        }
        if (b!=0) {
            output = output *10 + b%10;
            b = b/10;
        }
    }
    printf("The program prints %d.", output);
    return 0;
}