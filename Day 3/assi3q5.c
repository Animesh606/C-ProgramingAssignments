#include <stdio.h>

int main() {
    int C;
    int alpha[26];
    int i = 0;
    while(i < 26)
    {
        alpha[i] = 0;
        i++;
    }
    printf("Enter the sentence (end it with '.'):");
    while(1) {
        C = getchar();
        if(C == '.') {
            break;
        }
        i = 0;
        while (i < 26)
        {
            if(C == 'A'+i || C == 'a'+i) {
                alpha[i]++;
            }
            i++;
        }
    }
    printf("The count of English letters:\n");
    for (i = 0; i < 26; i++)
    {
        printf("%c = %d\n", 'A'+i, alpha[i]);
    }
    
    return 0;
}