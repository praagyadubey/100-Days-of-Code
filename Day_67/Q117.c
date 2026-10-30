// Q117 (C Program): UPES 100 Days of Code Q117

#include <stdio.h>
#include <stdlib.h>
int main() {
    int n;
    if (scanf("%d", &n) == 1) {
        int *arr = (int*)malloc(n * sizeof(int));
        for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
        for (int i = 0; i < n; i++) printf("%d ", arr[i]);
        printf("\n");
        free(arr);
    }
    return 0;
}
