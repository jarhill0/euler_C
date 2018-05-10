#include <stdio.h>

int digits(int d) {
    switch(d) {
        case 1:
        case 2:
        case 6:
            return 3;
        case 4:
        case 5:
        case 9:
            return 4;
        case 3:
        case 7:
        case 8:
            return 5;
        case 0:
        default:
            return 0;
    }
} 

int teens(int d) {
    switch(d) {
        case 0:
            return 3;
        case 1:
        case 2:
            return 6;
        case 5:
        case 6:
            return 7;
        case 3:
        case 4:
        case 8:
        case 9:
            return 8;
        case 7:
            return 9;
        default:
            return 0;
    }
}

int ten(int d) {
    switch(d) {
        case 4:
        case 5:
        case 6:
            return 5;
        case 2:
        case 3:
        case 8:
        case 9:
            return 6;
        case 7:
            return 7;
        case 1:
        case 0:
        default:
            return 0;
    }
}

int main() {
    int sum = 0;
    for (int num = 1; num <= 1000; num++) {
        int thous = num / 1000;
        int hund = (num / 100) % 10;
        int tens = (num / 10) % 10;
        int ones = num % 10;

        if (tens == 1)
            sum += teens(ones);
        else
            sum += digits(ones);

        sum += ten(tens);

        if (hund)
            sum += digits(hund) + 7;  // Ex: "one hundred"

        // add the "and"
        if (hund && (tens || ones))
            sum += 3;  // such as "five  hundred and seven"

        if (thous)
            sum += digits(thous) + 8;  // Ex: "five thousand"
    }
    printf("%d\n", sum);
    return 0;
}

