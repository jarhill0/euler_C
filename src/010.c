#include <stdio.h>

int main() {
    const int length = 2000001;  // 2 mil elements, plus one for element 0
    char sieve[length] = {0}; // all elements 0
    sieve[0] = 1;
    sieve[1] = 1;
    for (long int n = 2; n < length; n++) {
        if (sieve[n] == 0) {
            for (long int prod = 2 * n; prod < length; prod += n)
                sieve[prod] = 1;
        }
    }

    long long int sum = 0;
    for (long int n = 2; n < length; n++) {
        if (sieve[n] == 0)
            sum += n;
    }
    printf("%lld\n", sum);
    return 0;
}
    
