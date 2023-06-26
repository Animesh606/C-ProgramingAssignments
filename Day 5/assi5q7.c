#include <stdio.h>
int palindrome(char *str,int i,int size) {
    if(*(str + i) != *(str + size))
        return 0;
    else if(i==size || i-size == 1)
        return 1;
    else if(*(str + i) == *(str + size))
        return palindrome(str, i+1, size-1);
}
int main() {
    int n, i=0;
    printf("Enter the length of string: \n");
    scanf("%d",&n);
    char str[n];
    printf("Enter the string: \n");
    scanf("%s", &str);
    if(palindrome(str, i, n-1))
        printf("True\n");
    else
        printf("False\n");
    return 0;
}
