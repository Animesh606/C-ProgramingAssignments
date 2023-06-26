#include <stdio.h>

int compare(char *s1, char *s2) {
    if ((*s1 == '\0') && (*s2== '\0'))
        return 0;
    if(*s1 > *s2)
        return 1;
    else if(*s1 < *s2)
        return -1;
    return compare(s1+1,s2 +1);
}
int main() {
    char s1[20], s2[20];
    printf("Enter the first string: \n");
    scanf("%s", &s1);
    printf("Enter the second string: \n");
    scanf("%s", &s2);
    printf("%d", compare(s1, s2));
    return 0;
}