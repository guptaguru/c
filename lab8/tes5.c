#include <stdio.h>

int main() {
    // Define an array of pointers to integers
    int *arr_of_ptrs[3];

    // Define three arrays of integers
    int arr1[] = {1, 2, 3};
    int arr2[] = {4, 5, 6};
    int arr3[] = {7, 8, 9};

    // Assign the addresses of these arrays to the array of pointers
    arr_of_ptrs[0] = arr1;
    arr_of_ptrs[1] = arr2;
    arr_of_ptrs[2] = arr3;

    // Print the elements of each array using the array of pointers
    printf("Elements of arr1: ");
    for (int i = 0; i < 3; i++) {
        printf("%d ", *(arr_of_ptrs[0] + i));
    }
    printf("\n");

    printf("Elements of arr2: ");
    for (int i = 0; i < 3; i++) {
        printf("%d ", *(arr_of_ptrs[1] + i));
    }
    printf("\n");

    printf("Elements of arr3: ");
    for (int i = 0; i < 3; i++) {
        printf("%d ", *(arr_of_ptrs[2] + i));
    }
    printf("\n");

    // Define a pointer to an array of integers
    int (*ptr_to_arr)[3];

    // Assign the address of arr1 to the pointer to the array
    ptr_to_arr = &arr1;

    // Print the elements of arr1 using the pointer to the array
    printf("Elements of arr1 using pointer to array: ");
    for (int i = 0; i < 3; i++) {
        printf("%d ", (*ptr_to_arr)[i]);
    }
    printf("\n");

    return 0;
}
