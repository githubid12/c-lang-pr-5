#include <stdio.h>

int main() {
    int n, a[100], max, second_max,i;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array: ");
    for(i=0; i<n; i++) {
        scanf("%d", &a[i]);
    }

    max = second_max = a[0];

    for(i=1; i<n; i++) {
        if(a[i] > max) {
            second_max = max;
            max = a[i];
        } else if(a[i] > second_max && a[i] < max) {
            second_max = a[i];
        }
    }

    if(second_max == 0) {
        printf("There is no second largest element in the array.\n");
    } else {
        printf("The second largest element of the array is: %d\n", second_max);
    }

    return 0;
}
