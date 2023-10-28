#include <stdio.h>
#include <stdlib.h>

// Pigeonhole Sort Algorithm in C
// GitHub: https://github.com/uppy19d0

void pigeonholeSort(int arr[], int n) {
    int min = arr[0];
    int max = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    int range = max - min + 1;
    int *holes[range];

    for (int i = 0; i < range; i++) {
        holes[i] = NULL;
    }

    for (int i = 0; i < n; i++) {
        if (holes[arr[i] - min] == NULL) {
            holes[arr[i] - min] = (int*)malloc(sizeof(int));
            *holes[arr[i] - min] = 0;
        }
        (*holes[arr[i] - min])++;
    }

    int index = 0;
    for (int i = 0; i < range; i
