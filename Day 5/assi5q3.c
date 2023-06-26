#include <stdio.h>

int Max(int a, int b) {
    if (a >= b)
        return a;
    else 
        return b;
}
int largestValue(int arr[], int i, int n) {
    if (i == n)
        return arr[i];
    else 
        return Max(arr[i], largestValue(arr, ++i, n));
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
    printf("The largest value is %d\n", largestValue(arr, k, n));
    return 0;
}