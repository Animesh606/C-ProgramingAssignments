#include <stdio.h>
int isPrime(int x)
{
    for (int i = 2; i*i <= x; i++)
    {
        if(x%i == 0) 
            return 0;
    }
    return 1;
}

int HCF(int a, int b) {
    if (a < b) 
        return HCF(b, a);
    else if (a%b == 0)
        return b;
    else 
        return HCF(b, a%b);
}

int HCFofArray(int *arr, int size) {
    if(size == 1) {
        return *arr;
    }
    else {
        return HCF(*arr, HCFofArray(arr + 1, size-1));
    }
}

int main(){
    int lenght;
    printf("Enter the quantity of values: \n");
    scanf("%d", &lenght);
    int arr[lenght];
    printf("Enter the values: \n");
    for (int i = 0; i < lenght; i++)
    {
        scanf("%d", &arr[i]);
    }
    int hcf = HCFofArray(arr, lenght);
    for (int i = 2; i <= hcf; i++)
    {
        if(hcf%i == 0 && isPrime(i) == 1){
            printf("%d ", i);
        }
    }
    return 0;
}