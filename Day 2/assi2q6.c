#include <stdio.h>

int main() {
    int x, y, n, s = 0;
    printf("Enter the value of x: ");
    scanf("%d" , &x);
    printf("Enter the value of y: ");
    scanf("%d" , &y);
    printf("Enter the value of n: ");
    scanf("%d" , &n);
    int y0 = 3, fm = 5, x1 = x, y2 = y*y;
    for (int i = 1; i <= n; i++)
    {
        s = s + fm*((i+1)*x1 + y0*y2);
        x1 = x1*x1;
        y2 = y2*y2;
        y0 = y0 *2;
        fm = fm *2;
    }
    printf("The value of S(x,y) is %d.", s);
    return 0;
}