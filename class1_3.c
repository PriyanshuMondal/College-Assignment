#include <stdio.h>
#include <string.h>
#define Max 50

int main()
{
    char str1[Max], str2[Max], str3[Max], c;
    printf("Enter the first string :");
    gets(str1);
    printf("Enter the character :");
    scanf("%c", &c);
    printf("Enter the string to be replaced with :");
    scanf("%s", &str2);
    int k = 0;
    for (int i = 0; i < strlen(str1); i++)
    {
        if (str1[i] == c)
        {
            for (int i = 0; i < strlen(str2); i++)
            {
                str3[k] = str2[i];
                k++;
            }
            continue;
        }
        str3[k] = str1[i];
        k++;
    }
    puts(str3);
    return 0;
}
