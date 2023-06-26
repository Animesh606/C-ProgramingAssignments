#include <stdio.h>

// e. Ten numbers are entered from the keyboard into array.The number to be searched is entered through the keyboard by user.Write a program to find if the number to be searched is present in the array, and if it is present, display the number of times it appears in the array.

int main() {
    int arr[10], num, count = 0;
    printf("Enter the 10 numbers: \n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the number to be find: ");
    scanf("%d", &num);
    for (int i = 0; i < 10; i++)
    {
        if(num == arr[i])
            count++;
    }
    if (count == 0)
        printf("%d is not found in array!!", num);
    else 
        printf("%d is found in array %d times!!", num, count);
    return 0;
}