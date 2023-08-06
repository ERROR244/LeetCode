#include <stdio.h>
#include <stdlib.h>

int ft_strlen(char *str)
{
    int i = 0;
    while (str[i])
        i++;
    return (i);
}
char * mergeAlternately(char * word1, char * word2){
    int k = 0, l = 0, i = 0;
    int j;
    int len1 = ft_strlen(word1);
    int len2 = ft_strlen(word2);
    char *tab;
    tab = (char *)malloc(sizeof(char) * (len1 + len2 + 1));
    while (i < len1 + len2 && word1[k] && word2[l])
    {
        j = i + 1;
        tab[i] = word1[k];
        tab[j] = word2[l];
        i += 2;
        k++;
        l++;
    }
    while (i < len1 + len2)
    {
        if (len1 > len2)
        {
            tab[i] = word1[k];
            i++;
            k++;
        }
        else if (len1 < len2)
        {
            tab[i] = word2[l];
            i++;
            l++;
        }
    }
    tab[i] = '\0';
    return (tab);
}

int main(){
    printf("%s", mergeAlternately("ab", "abcd"));
}