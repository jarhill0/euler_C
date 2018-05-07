#include <stdio.h>
#include <math.h>

/* I'm not using a sieve of Eratosthenes because I want the nth prime, not
primes up to n. Alllllso, I might not really know how to use arrays in C... */

int isPrime(int num) {
    double root = sqrt(num);
    for (int factor = 2; factor <= root; factor++) {
        if (num % factor == 0)
            return 0;
    }
    return 1;
} 

int main() {
    int primeCount = 0;
    int num = 2;
    while (primeCount < 10001) {
        if (isPrime(num))
            primeCount++;
        num++;
    }
    printf("%d\n", num - 1);
    return 0;
}

