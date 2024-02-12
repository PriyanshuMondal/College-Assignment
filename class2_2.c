#include <stdio.h>
#include <string.h>

typedef struct
{
    char name[21];
    char roll_no[5];
    int score;
} student;

int compareStudents(void *rec1, void *rec2)
{
    if (strlen((char *)rec1) > strlen((char *)rec2))
        return 1;
    if (strlen((char *)rec1) < strlen((char *)rec2))
        return -1;
    return strcmp((char *)rec1, (char *)rec2);
}

int main()
{
    int n;
    printf("Enter the number of students :");
    scanf("%d", &n);
    student S[n];
    printf("Enter the Name, Roll Number and score of\n");
    for (int i = 0; i < n; i++)
    {
        printf("student %d\n", i + 1);
        scanf("%s %s %d", S[i].name, S[i].roll_no, &S[i].score);
    }
    for (int i = 0; i < n - 1; i++)
    {
        int flag = 0;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (compareStudents(&S[j].roll_no, &S[j + 1].roll_no) > 0)
            {
                student temp = S[j];
                S[j] = S[j + 1];
                S[j + 1] = temp;
                flag = 1;
            }
        }
        if (flag == 0)
            break;
    }
    printf("The sorted array is\n");
    for (int i = 0; i < n; i++)
    {
        printf("%s %s %d\n", S[i].name, S[i].roll_no, S[i].score);
    }
    return 0;
}