#include <stdio.h>

int main() {
    int n1, n2, n3, temp;
    printf("Enter the 1st number: ");
    scanf("%d", &n1);
    printf("Enter the 2nd number: ");
    scanf("%d", &n2);
    printf("Enter the 3rd number: ");
    scanf("%d", &n3);
    if (n1 > n2) {
        temp = n1;
        n1 = n2;
        n2 = temp;
    }
    if (n1 > n3) {
        temp = n1;
        n1 = n3;
        n3 = temp;
    }
    if (n2 > n3) {
        temp = n2;
        n2 = n3;
        n3 = temp;
    }
    printf("The smallest, 2nd smallest and largest numbers are %d, %d, and %d.", n1, n2, n3);

    return 0;
}