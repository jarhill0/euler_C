#include <stdio.h>

int isLeapYear(int year) {
    return (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0));
}

int numDays(int month, int year) {  // get number of days in not a leap year
    switch(month) {
        case 0:
        case 2:
        case 4:
        case 6:
        case 7:
        case 9:
        case 11:
            return 31;
        case 3:
        case 5:
        case 8:
        case 10:
            return 30;
        case 1:
            return isLeapYear(year) ? 29 : 28;
        default:
            return -1;
    }
}

int main() {
    int year = 1900;
    int month = 0;  // January
    int weekday = 1;  // Monday; sunday = 0.
    
    while (year < 1901) {
        weekday = (weekday + numDays(month, year)) % 7;
        month++;
        if (month > 11) {
            year++;
            month = 0;
        }
    }

    int ans = 0;
    while (year < 2001) {
        if (weekday == 0) {
            ans++;
        }
        weekday = (weekday + numDays(month, year)) % 7;
        month++;
        if (month > 11) {
            year++;
            month = 0;
        }
    }
    printf("%d\n", ans);
    return 0;
}
