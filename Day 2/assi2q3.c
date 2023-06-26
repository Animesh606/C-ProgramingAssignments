#include <stdio.h>

int main() {
    int num;
    printf("Enter the number: ");
    scanf("%d" , &num);
    printf("All the odd factors of the %d: \n", num);
    for (int i = 1; i <= num; i+=2)
    {
        if (num%i == 0) {
            printf("%d\n", i);
        }
    }
    
    return 0;
}