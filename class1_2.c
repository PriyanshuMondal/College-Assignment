#include <stdio.h>
int FindMax(int A[], int size)
{
    int i = 0;
    int max = A[i];
    for (i = 1; i < size; i++)
    {
        if (A[i] > max)
            max = A[i];
    }
    return max;
}
int main()
{
    int n;
    printf("Enter number of numbers in sequence");
    scanf("%d", &n);
    int A[n];
    printf("Enter the sequence :");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
    }
    int m = FindMax(A, n) + 1;
    int freq[m];
    for (int i = 0; i < m; i++)
    {
        freq[i] = 0;
    }
    for (int i = 0; i < n; i++)
    {
        freq[A[i]]++;
    }
    int count = 0;
    for (int i = 0; i < m; i++)
    {
        if (freq[i] > 0)
            count++;
    }
    printf("Total distinct numbers are %d", count);
    return 0;
}
