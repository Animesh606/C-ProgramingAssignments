#include <stdio.h>

int main() {
    char str[1000];
    printf("Enter a sentence (end it with '.'):");
    int i = 0;
    while(1){
        str[i] = getchar();
        if (str[i] == '.')
        {
            break;
        }
        i++;
    }
    int n;
    printf("How many times the sentence should be printed?:");
    scanf("%d", &n);
    for (int j = 0; j < n; j++)
    {
        printf("%s\n", str);
    }
    
    return 0;
}