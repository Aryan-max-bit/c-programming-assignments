#include <stdio.h>

int main() {
    int arr[10];
    int n, i, num, cnt = 0;

    printf("Enter size of array (max 10): ");
    scanf("%d", &n);

    printf("Enter elements of arr\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter number whose frequency you want to know: ");
    scanf("%d", &num);

    for(i = 0; i < n; i++) {
        if(arr[i] == num) {
            cnt++;
        }
    }

    printf("Required frequency is: %d\n", cnt);

    return 0;
}
