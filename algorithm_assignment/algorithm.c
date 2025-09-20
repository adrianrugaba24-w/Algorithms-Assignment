#include <stdio.h>

int findMax(int arr[], int n) {
    int maxVal = arr[0]; // this assumes first element is max
    for (int i = 1; i < n; i++) {
        if (arr[i] > maxVal) {
            maxVal = arr[i]; // this then updates if current element is greater
        }
    }
    return maxVal;
}

int main() {
    int arr[] = {2, 5, 7, 9, 3, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Maximum element: %d\n", findMax(arr, n));
    return 0;
}

