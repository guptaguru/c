#include<stdio.h>
int main()
{
    int a[100],*p,i,n;
    int b[][2]={{10,10},{3,6},{4,7},{7,4}},j,(*ptr)[2];
    printf("enter the number of elemnt");
    scanf("%d",&n);
    //accessing 1D array
    for(i=0;i<n;i++)
    {
        printf("Enter %d element",i+1);
        scanf("%d",&a[i]);
    }
    p=&a[0];
    printf("Your elements are in 1D\t");
    for(i=0;i<n;i++)
     printf("%d\t",*p++);// can also use *(p+i)
    printf("\n");
    //accessing 2D array
    printf("Your elements are in 2D\n");
    ptr=b;
    for(i=0;i<4;i++)
    {
         for(j=0;j<2;j++)
         {
            printf("%d\t",*(*(ptr+i)+j));
         }
         printf("\n");
    }
    return 0;
}