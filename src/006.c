#include <stdio.h>

int sumOfSquares(int lim) {
    int sum = 0;
    for (int x = 1; x <= lim; x++)
        sum += x * x;
    return sum;
}

int squareOfSums(int lim) {
    int sum = 0;
    for (int x = 1; x <= lim; x++)
        sum += x;
    return sum * sum;
}

int main() {
    printf("%d\n", squareOfSums(100) - sumOfSquares(100));
    return 0;
}

