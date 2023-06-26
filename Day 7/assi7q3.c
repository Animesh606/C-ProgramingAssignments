#include <stdio.h>

// 3.Write a program to pick up the largest number from any 3*3 matrix.(use function and pointer). 

int largestMatrix(int *arr){
    int max = *arr;
    for (int i = 0; i < 9; i++)
    {
        if(*(arr+i) > max)
            max = *(arr+i);
    }
    return max;
}
int main() {
    int matrix[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter the eliment at %d,%d position: ", i+1, j+1);
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("The largest number of this matrix is %d", largestMatrix(&matrix[0][0]));
    return 0;
}