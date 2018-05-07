#include <stdio.h>

int makeDivisibleBy(int num, int divisor) {
    int dividedOut = 1;
    for (int factor = 2; factor <= divisor; factor++) {
        while (divisor % factor == 0) {
            divisor /= factor;  // integer division
            if (num % factor == 0) {
                num /= factor;
                dividedOut *= factor;
            } else
                num *= factor;
        }
    }
    return num * dividedOut;
}

int main() {
    int answer = 1;
    for (int factor = 2; factor <= 20; factor++)
        answer = makeDivisibleBy(answer, factor);
    printf("%d\n", answer);
    return 0;
}

