#include <stdio.h>

int bin2dec(int n) {
    int dec = 0, base = 1;

    while (n > 0) {
        int bit = n % 10;
        dec += bit * base;
        base *= 2;
        n /= 10;
    }

    return dec;
}
