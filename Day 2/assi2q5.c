#include <stdio.h>

int main() {
    int x1, x2, n, s = 0;
    printf("Enter the value of x1: ");
    scanf("%d" , &x1);
    printf("Enter the value of x2: ");
    scanf("%d" , &x2);
    printf("Enter the value of n: ");
    scanf("%d" , &n);
    int var = x1*x2, c;
    for (int i = 0; i < n; i++)
    {
        if (i%2 == 0) {
            c = 2;
        }
        else {
            c = 3;
        }
        s = s + c*var;
        var = var*x1*x2*x2;
    }
    printf("The value of s(x1,x2) = %d", s);
    return 0;
}