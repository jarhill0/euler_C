#include <stdio.h>

int solve() {
    for (int a = 1; a < 998; a++) {
        for (int b = 1; b <= a; b++) {
            int c = 1000 - (a + b);
            if (a * a + b * b == c * c)
                return a * b * c;
        }
    }
    return -1;
}

int main() {
    printf("%d\n", solve());
    return 0;
}

