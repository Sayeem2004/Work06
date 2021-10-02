#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Step 1
    int arr[10], i;

    // Step 2
    arr[0] = 0;

    // Step 3
    srand(time(NULL));
    for (i = 1; i < 10; i++)
        arr[i] = rand();

    // Step 4
    printf("arr: ");
    for (i = 0; i < 10; i++)
        printf("%d ", arr[i]);
    printf("\n");

    // Step 5
    int ray[10];

    // Step 6
    int *ap = arr, *rp = ray;

    // Step 7
    for (i = 0; i < 10; i++)
        rp[i] = ap[10-i-1];
    printf("ray: ");
    for (i = 0; i < 10; i++)
        printf("%d ", rp[i]);
    printf("\n");

    for (i = 0; i < 10; i++)
        *(rp+i) = *(ap+10-i-1);
    printf("ray: ");
    for (i = 0; i < 10; i++)
        printf("%d ", *(rp+i));
    printf("\n");

    return 0;
}
