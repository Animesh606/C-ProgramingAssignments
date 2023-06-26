#include <stdio.h>

// b. 1	      
//    01		                      
//    010
//    1010

int main() {
    int n, x = 0;
    printf("Enter the number: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("%d", (++x)%2);
        }
        printf("\n");
    }
    
    return 0;
}