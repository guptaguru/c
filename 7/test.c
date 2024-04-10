#include <stdio.h>

void count_frequency(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        int count = 1;
        if (arr[i] == -1)
            continue;
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                count++;
                arr[j] = -1; 
            }
        }
        printf("%d occurs %d times\n", arr[i], count);
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 1, 2, 3, 1, 2, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    count_frequency(arr, size);
    return 0;
}
