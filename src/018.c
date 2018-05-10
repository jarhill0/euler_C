#include <stdio.h>

static char tri[15][44] = {
"75",
"95 64",
"17 47 82",
"18 35 87 10",
"20 04 82 47 65",
"19 01 23 75 03 34",
"88 02 77 73 07 63 67",
"99 65 04 28 06 16 70 92",
"41 41 26 56 83 40 80 70 33",
"41 48 72 33 47 32 37 16 94 29",
"53 71 44 65 25 43 91 52 97 51 14",
"70 11 33 28 77 73 17 78 39 68 17 57",
"91 71 52 38 17 14 91 43 58 50 27 29 48",
"63 66 04 68 89 53 67 30 73 16 69 87 40 31",
"04 62 98 27 23 09 70 98 73 93 38 53 60 04 23"
};

int getTriangleNumber(int row, int column) {
    return (int) 10 * (tri[row][column * 3] - '0')
        + tri[row][column * 3 + 1] - '0';
}

int max(int a, int b) {
    return a > b ? a : b;
}

int main() {
    int length = 15;
    int row[length];

    for (int i = 0; i < length; i++) {
        row[i] = getTriangleNumber(length - 1, i);
    }
    
    length--;  // once our array is initialized, we begin operations with the
               // next row
    // action loop
    for (; length >= 1; length--) {
        // "shrink" the row array by one.
        // each element is the max of either itself or the item one to the right
        for (int i = 0; i < length; i++)
            row[i] = max(row[i], row[i + 1]);  // we can access i+1 because
                                               // there is 1 more valid element
        // now add in the items from the triangle
        for (int i = 0; i < length; i++)
            row[i] += getTriangleNumber(length - 1, i);
    }
    printf("%d\n", row[0]);

    return 0;
}
