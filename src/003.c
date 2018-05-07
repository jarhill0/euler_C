#include <stdio.h>

int main() {
    long num = 600851475143;
    long max = 0;

    for (long x = 2; x <= num; x++) {
        if (num % x == 0)
            max = x;
        while (num % x == 0)
            num /= x;
    }

    printf("%ld\n", max);
    return 0;
}

