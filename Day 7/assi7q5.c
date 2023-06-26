#include <stdio.h>

// 5..Ten numbers are entered from the keyboard into array.Write a program to find out how many of them are +ve,-ve,even,and odd;

int main() {
    int arr[10], pos = 0, neg = 0, odd = 0, even = 0;
    printf("Enter the 10 numbers: \n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
        if(arr[i] > 0)
            pos++;
        if(arr[i] < 0)
            neg++;
        if(arr[i]&1)
            odd++;
        else
            even++;
    }
    printf("Number of positive number is %d\n", pos);
    printf("Number of negative number is %d\n", neg);
    printf("Number of even number is %d\n", even);
    printf("Number of odd number is %d\n", odd);
    return 0;
}