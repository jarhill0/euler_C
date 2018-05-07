#include <stdio.h>

int main() {
    int a = 0;
    int b = 1;
    int sum = 0;
    while (b < 4000000) {
        if (b % 2 == 0)
             sum += b;

        int temp = b;
        b += a;
        a = temp;
    }
    printf("%d\n", sum);
    return 0;
}

