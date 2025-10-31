



#include <stdio.h>
// basically calculating armstrong'

int main() {
    int n, temp, digit;
    int sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;   

    while (temp > 0) {
        digit = temp % 10;           // separating last digit
        sum = sum + (digit * digit * digit);  // cube of digit
        temp = temp / 10;            // removing last digit
    }

    if (sum == n)
        printf("%d is an Armstrong number\n", n);
    else
        printf("%d is not an Armstrong number\n", n);

    return 0;
}
