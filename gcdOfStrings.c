#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char * gcdOfStrings(char * str1, char * str2){
    if (strcmp(str1, str2) == 0)
        return str1;
    
    if (strncmp(str1, str2, strlen(str2)) == 0)
        return gcdOfStrings(str1 + strlen(str2), str2);
    
    if (strncmp(str2, str1, strlen(str1)) == 0)
        return gcdOfStrings(str1, str2 + strlen(str1));
    
    return "";
}

int main() {
    char str1[] = "ABCABC";
    char str2[] = "ABC";
    char *result = gcdOfStrings(str1, str2);
    printf("%s\n", result);
    
    return 0;
}