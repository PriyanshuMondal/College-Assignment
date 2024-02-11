#include <stdio.h>
#include <string.h>

typedef struct
{
    char name[21];
    char roll_no[5];
    int score;
} student;

void compareStudents(void *rec1, void *rec2)
{
    int ans;
    if (strlen((char *)rec1) > strlen((char *)rec2))
        ans = 1;
    if (strlen((char *)rec1) < strlen((char *)rec2))
        ans = -1;
    ans = strcmp((char *)rec1, (char *)rec2);
    printf("%d\n", ans);
}

int main()
{
    int n, s1, s2;
    printf("Enter the number of students :");
    scanf("%d", &n);
    student S[n];
    printf("Enter the Name, Roll Number and score of\n");
    for (int i = 0; i < n; i++)
    {
        printf("student %d\n", i + 1);
        scanf("%s %s %d", S[i].name, S[i].roll_no, &S[i].score);
    }
    printf("Enter the students to compare :");
    scanf("%d %d", &s1, &s2);
    compareStudents(&S[s1 - 1].roll_no, &S[s2 - 1].roll_no);
    return 0;
}
