#include <stdio.h>

int main() {
    int C;
    while(1){
        printf("Enter the character (enter '.' for termination):");
        lets:
        C = getchar();
        if (C == '.') {
            printf("Thank you.\n");
            break;
        }
        else if (C == '\n') {
            goto lets;
        }
        else {
            printf("The ASCII code for '%c' is %d.\n", C, C);
        }
        
    }
    return 0;
}