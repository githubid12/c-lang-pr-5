#include <stdio.h>

int main() {
    int n, a[100], count;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array: ");
    for(int i=0; i<n; i++) {
        scanf("%d", &a[i]);
    }

    printf("The negative elements in the array are: ");
    for(int i=0; i<n; i++) {
        if(a[i] < 0) {
            printf("%d ", a[i]);
        }
    }


}
