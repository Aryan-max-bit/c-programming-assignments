#include <stdio.h>

void main() {
    int num, i;
    int arr[10];
    int n;
    int found = 0;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter values in array:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter value of number to search: ");
    scanf("%d", &num);

    for(i = 0; i < n; i++) {
        if(arr[i] == num) {
            found = 1;
            break;
        }
    }

    if(found) {
        printf("Yes, found number %d at position %d\n", num, i);
    } else {
        printf("No such number found in array\n");
    }

}

