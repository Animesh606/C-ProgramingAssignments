#include <stdio.h>
#include <string.h>

int isPalindrome(char *str,int i,int size) {
    if(*(str + i) != *(str + size))
        return 0;
    else if(i==size || i-size == 1)
        return 1;
    else if(*(str + i) == *(str + size))
        return isPalindrome(str, i+1, size-1);
}
int main() {
    char str[100];
    int k = 0;
    printf("Enter the string: \n");
    scanf("%s", &str);
    int a = isPalindrome(str, k, strlen(str)-1);
    if (a == 1) {
        printf("yes, its a palindrome!!");
    }
    else {
        printf("No, its not a palindrome!!");
    }
    return 0;
}