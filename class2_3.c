#include <stdio.h>
#include <string.h>
#include <stdlib.h>

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

typedef struct Node
{
    student data;
    struct Node *next;
} Node;

Node *createNewnode(student data)
{
    Node *newNode;
    newNode = (Node *)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

int main()
{
    Node *head = NULL, *temp;
    student data1 = {"Amal", "102", 67};
    student data2 = {"Vinita", "101", 87};
    student data3 = {"Gayetri", "103", 75};

    head = createNewnode(data1);
    head->next = createNewnode(data2);
    head->next->next = createNewnode(data3);

    Node *ptr = head;

    for (int i = 0; i < 3 - 1; i++)
    {
        int flag = 0;
        for (int j = 0; j < 3 - i - 1; j++)
        {
            if (compareStudents(&(ptr->data.roll_no), &(ptr->next->data.roll_no)) > 0)
            {
                student temp = ptr->data;
                ptr->data = ptr->next->data;
                ptr->next->data = temp;
                flag = 1;
            }
            ptr = ptr->next;
        }
        if (flag == 0)
            break;
        ptr = head; // Reset ptr to head for next pass
    }

    printf("Sorted linked list is\n");
    ptr = head; // Reset ptr to head to print the list
    while (ptr != NULL)
    {
        printf("%s %s %d\n", ptr->data.name, ptr->data.roll_no, ptr->data.score);
        ptr = ptr->next;
    }
    return 0;
}
