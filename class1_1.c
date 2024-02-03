#include <stdio.h>
int FindMax(int A[], int size)
{
    int i = 0;
    int max = A[i];
    for (i = 1; i < size; i++)
    {
        if (A[i] > max)
        {
            max = A[i];
        }
    }
    return max;
}
int Search(int B[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (key == B[i])
            return 0;
    }
    return key;
}
int main()
{
    int m, n;
    printf("Enter the size of the first array:");
    scanf("%d", &m);
    int A[m];
    printf("Enter the elements of the first array:\n");
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &A[i]);
    }
    printf("Enter the size of the second array:");
    scanf("%d", &n);
    int B[n];
    printf("Enter the elements of the second array:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &B[i]);
    }
    int C[m];
    int k = 0;
    for (int i = 0; i < m; i++)
    {
        C[k] = Search(B, n, A[i]);
        k++;
    }
    printf("The number is %d", FindMax(C, m));
    return 0;
}
