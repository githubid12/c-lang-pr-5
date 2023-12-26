#include <stdio.h>

int main() {
    int n, a[100], min, max,i;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array: ");
    for(i=0; i<n; i++) {
        scanf("%d", &a[i]);
    }

    min = max = a[0];

    for(i=1; i<n; i++) {
        if(a[i] < min) {
            min = a[i];
        }
        if(a[i] > max) {
            max = a[i];
        }
    }

    printf("The minimum element of the array is: %d\n", min);
    printf("The maximum element of the array is: %d\n", max);

}
