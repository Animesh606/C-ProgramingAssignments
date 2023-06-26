#include <stdio.h>
#include <string.h>

// 1.Write a program  to check whether a given string palindrom or not.

int main() {
    char str[100];
    printf("Enter the string: ");
    scanf("%s", str);
    int c = 1;
    for (int i = 0; i < strlen(str)/2; i++)
    {
        if(str[i] != str[strlen(str) - i - 1]){
            c = 0;
            break;
        }
    }
    if (c == 1) 
        printf("This is a palindrome!!");
    else 
        printf("This is not a palindrome!!");
    return 0;
}