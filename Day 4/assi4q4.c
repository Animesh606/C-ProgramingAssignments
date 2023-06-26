#include <stdio.h>
#include <string.h>
void capitalize(char str[]){
    for (int i = 0; i < strlen(str)-2; i++)
    {
        if((str[i-1] == ' ' || i == 0) && (str[i] >= 'a' && str[i] <= 'z')) {
            str[i] = str[i] - 'a' + 'A';
        }
    }
    
}
int main() {
    char arr[100];
    printf("Enter the string: \n");
    int c;
    for (int i = 0; ; i++)
    {
        c = getchar();
        if (c == '\n') {
            break;
        }
        else {
            arr[i] = c;
        }
    }
    capitalize(arr);
    printf("The capilised format of string is :\n%s", arr);
    return 0;
}