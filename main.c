
#include <stdio.h>

void swap(int* xp, int* yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void selectionSort(int arr[], int n)
{
    int i, j, min_idx;

    // One by one move boundary of unsorted subarray
    for (i = 0; i < n - 1; i++) {

        // Find the minimum element in unsorted array
        min_idx = i;
        for (j = i + 1; j < n; j++)
            if (arr[j] < arr[min_idx])
                min_idx = j;

        // Swap the found minimum element
        // with the first element
        swap(&arr[min_idx], &arr[i]);
    }
}



int main() {
    int size, arr[100], i, n;
    printf("Enter the Size of Array: ");
    scanf("%d", &size);
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    selectionSort(arr, size);
    printf("Enter the nth number");
    scanf("%d", &n);
    printf("%dth Smallest Number is: %d\n", n, arr[n-1]);
    printf("%dth Largest Number is: %d", n, arr[size-n]);
    return 0;
}

