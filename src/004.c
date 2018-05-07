#include <stdio.h>

int isPalindrome(int num) {
    int temp = num;
    int reversed = 0;
    while (temp) {
        reversed *= 10;
        reversed += temp % 10;  // integer division
        temp /= 10;  // integer division
    }
    return num == reversed;
}

int main() {
    int max = 0;
    for (int a = 100; a <= 999; a++) {
        for (int b = 100; b <= a; b++) {
            int product = a * b;
            if (product > max && isPalindrome(product))
                max = product;
        }
    }
    printf("%d\n", max);
    return 0;
}

