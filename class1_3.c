#include <stdio.h>
#include <string.h>
#define Max 50

int main()
{
    char str1[Max], str2[Max], c;
    printf("Enter the first string :");
    gets(str1);
    printf("Enter the character :");
    scanf("%c", &c);
    printf("Enter the string to be replaced with :");
    scanf("%s", &str2);
    for (int i = 0; i < strlen(str1); i++)
    {
        if (str1[i] == c)
        {
            printf("%s", str2);
            continue;
        }
        printf("%c", str1[i]);
    }
    return 0;
}