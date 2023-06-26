#include <stdio.h>

// a. A B C D		         
//    A B C
//    A B
//    A

int main() {
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-i; j++)
        {
            printf("%c ",'A'+j);
        }
        printf("\n");
    }
    
    return 0;
}