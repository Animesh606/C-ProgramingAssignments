#include <stdio.h>

int findNthLargest(int data[], int size, int n) {
    for (int i = size -1; i >= 0; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            if (data[j] > data[j-1])
            {
                int temp = data[j];
                data[j] = data[j-1];
                data[j-1] = temp;
            }
            
        }
        
    }
    return data[n-1];
}
int main() {
    int lenght, N;
    printf("Enter the size of the data: \n");
    scanf("%d", &lenght);
    int array[lenght];
    printf("Enter the value of N: \n");
    scanf("%d", &N);
    printf("Enter the data list: \n");
    for (int i = 0; i < lenght; i++)
    {
        scanf("%d ", &array[i]);
    }
    printf("The Nth largest number is %d", findNthLargest(array, lenght, N));
    return 0;
}