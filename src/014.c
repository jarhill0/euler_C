#include <stdio.h>

int lenCollatz(long int num) {
    int len = 0;
    while (num > 1) {
        len++;
        if (num % 2 == 0)
            num /= 2;
        else
            num = 3 * num + 1;
    }
    return len;
}

int main() {
    int bestLen = 0;
    long int bestNum;
    for (long int x = 0; x < 1000000; x++) {
        int len = lenCollatz(x);
        if (len > bestLen) {
            bestLen = len;
            bestNum = x;
        }
    }
    printf("%ld\n", bestNum);
    return 0;
}

