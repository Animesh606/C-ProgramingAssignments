#include <stdio.h>
#include <string.h>

// 2.Write a program to find any word in a string.

int main() {
    char string[1000], word[20];
    printf("Enter the string: \n");
    scanf("%s", &string);
    int n = strlen(string);
    printf("Enter the word to find: \n");
    scanf("%s", &word);
    int wl = strlen(word);
    int find = 0;
    for (int i = 0; i <= n - wl; i++)
    {
        int lc = 0;
        for (int j = 0; j < wl; j++)
        {
            if(string[i + j] != word[j])
                break;
            else
                lc++;
        }
        if (lc == wl){
            printf("%s is found on %dth position!!\n", word, i);
            find = 1;
        }
    }
    if(find == 0)
        printf("%s is not found!!", word);
    
    return 0;
}