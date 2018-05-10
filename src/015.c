#include <stdio.h>
#include <math.h>

int main() {
    // find 40! / (20! * 20!)
    long double product = 1;

    for (int num = 1; num <= 20; num++)
        product = (product * (num + 20)) / num;

    long int ans;
    if (fmod(product, 1) < 0.5)
        ans = (long int) product;
    else
        ans = (long int) product + 1;

    printf("%ld\n", ans);
    return 0;
}
