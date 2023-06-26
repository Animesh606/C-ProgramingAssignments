#include <stdio.h>

void ascendingSort(int *arr, int size) {
    for (int i = 0; i < size - 1; i++)
    {
        if (*(arr + i) > *(arr + i +1)){
            int temp = *(arr + i);
            *(arr + i) = *(arr + i+1);
            *(arr + i + 1) = temp;
        }
    }
    if (size > 0)
        ascendingSort(arr, size -1);
}
int main() {
    int n, k = 0;
    printf("Enter the size of array: \n");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the numbers: \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    ascendingSort(arr, n);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    
    return 0;
}