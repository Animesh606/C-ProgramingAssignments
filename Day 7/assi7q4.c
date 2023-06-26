#include <stdio.h>

// 4..Insert an element to an array at a particular position.(array is defined by user)

void insert(int *arr, int size, int num, int position){
    for (int i = size; i > position; i--)
    {
        *(arr + i) = *(arr +i -1);
    }
    *(arr + position) = num;
}
int main() {
    int n, num, position;
    printf("Enter the number of eliment in array: ");
    scanf("%d", &n);
    int arr[n+10];
    printf("Enter the Eliments of array: \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the number to be add: ");
    scanf("%d", &num);
    printf("Enter the position in array: ");
    scanf("%d", &position);
    insert(arr, n, num, position -1);
    for (int i = 0; i < n + 1; i++)
    {
        printf("%d ", arr[i]);
    }
    
    return 0;
}