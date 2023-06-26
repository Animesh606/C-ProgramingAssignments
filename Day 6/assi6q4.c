#include <stdio.h>

// d. A 5-digit +ve integer is entered through the keyboard, write a function to calculate sum of digits of 5-digit number using recursion. 

int sumOfDigit(int n){
    if (n == 0)
        return 0;
    else 
        return n%10 + sumOfDigit(n/10);
}
int main() {
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    printf("The sum of the digits is: %d", sumOfDigit(n));
    return 0;
}