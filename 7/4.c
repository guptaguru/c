#include<stdio.h>
void input(int[],int);
void freq(int[],int[],int); 
int main()
{
    int a[100], f[100], n;
    printf("Enter the size of your array: ");
    scanf("%d", &n);
    input(a, n);

    freq(a, f, n);
    return 0;
}
void input(int a[], int size)
{
    int i;
    printf("Enter the elements of array: \n");
    for (i = 0; i < size; i++)
    {
        printf("Enter a[%d]: ", i);
        scanf("%d", &a[i]);
    }
}
void freq(int a[], int f[], int n)
{
    int i, j, count;
    for (i = 0; i < n; i++)
    {
        count = 1;
        for (j = i + 1; j < n; j++)
        {
            if (a[i] == a[j])
            {
                count++;
                f[j] = -1;
            }
        }
        if (f[i] != -1)
            f[i] = count;
    }

    for (i = 0; i < n; i++)
    {

        if (f[i] != -1)
        {
            printf("The frequency of %d is %d\n", a[i], f[i]);
        }
    }
}