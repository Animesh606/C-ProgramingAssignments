#include <stdio.h>

int main() {
    int x, n, s = 1;
    printf("Enter the value of x: ");
    scanf("%d", &x);
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for (int i = 1; i < n; i++)
    {
        s = s + (i+1)*(x + 2*i -1);
    }
    printf("The value of S(x) is %d", s);
    return 0;
}