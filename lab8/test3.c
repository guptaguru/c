#include<stdio.h>
int main()
{
    int a[5]={1,3,4,5,7},*p;
    p=&a[0];
    printf("%d\n",*p);       // Output: 1, *p points to the first element of array a

    printf("%d\n",a[0]);     // Output: 1, accessing first element directly from array a

    printf("%d\n",*p++);     // Output: 1, post-increment, so it prints the current value of *p and then increments p to point to the next element
    printf("%d\n",*++p);     // Output: 3, pre-increment, so p is first incremented and then the value at the new location is printed
    printf("%d\n",++*p);     // Output: 4, value at the location pointed by p is incremented
    printf("%d\n",*(p+4));   // Output: 7, p+4 points to the fifth element of the array
    return 0;
}
