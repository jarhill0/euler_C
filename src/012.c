#include <stdio.h>
#include <math.h>

int numDivisors(int num) {
    int count = 0;
    double root = sqrt(num);

    for (int factor = 1; factor < root; factor++) {
        if (num % factor == 0)
            count += 2;  // the factor and it's "complimentary" factor
    }

    if (fmod(num, root) == 0)
        count += 1;
    return count;
}

int solve() {
    long int triangle = 0;
    for (int i=1; ; i++) {
        triangle += i;
        if (numDivisors(triangle) > 500) 
            return triangle;
    }
}

int main() {
    printf("%d\n", solve());
    return 0;
}
