#include <stdio.h>

int main() {
    int n, a[100], sum = 0,i;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array: ");
    for(i=0; i<n; i++) {
        scanf("%d", &a[i]);
        sum += a[i];
    }

    printf("The sum of all elements of the array is: %d", sum);

    return 0;
}
