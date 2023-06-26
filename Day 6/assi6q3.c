#include <stdio.h>

// c.E=1+1/1!+1/2!+1/3!+.....

int main() {
    int n;
    float sum = 1, x = 1;
    printf("Enter the number of eliment in series: ");
    scanf("%d", &n);
    for (int i = 2; i <= n; i++)
    {
        sum += 1/x;
        x*=i;
    }
    printf("The series sum upto %d is %f", n, sum);
    return 0;
}