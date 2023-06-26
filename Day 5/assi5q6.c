#include <stdio.h>

int findNumber(int arr[], int size, int num) {
    if (size ==0)
        return 0;
    else if (arr[size]== num)
        return 1;
    else 
        return findNumber(arr, size - 1, num);
}
int main() {
    int n, num;
    printf("Enter the size of array: \n");
    scanf("%d", &n);
    int L[n];
    printf("Enter the %d numbers: \n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &L[i]);
    }
    printf("Enter the number to be find: \n");
    scanf("%d", &num);
    int c = findNumber(L, n-1, num);
    if (c == 0)
        printf("False\n");
    else 
        printf("True\n");
    return 0;
}