#pragma once
#include "liba.h"

void mul(digits num, int multiplier) {
    int carry = 0, d;
    for (d = 0; num[d] >= 0; d++) {
        num[d] = num[d] * multiplier + carry;
        carry = num[d] / 10;
        num[d] %= 10;
    }
    while (carry) {
        num[d++] = carry % 10;
        carry /= 10;
    }
    num[d] = -1;
}

int length(digits dig) {
    int len = 0;
    while (dig[len] >= 0) len++;
    return len;
}

string toString(digits dig) {
    string res{ "" };
    for (int d = length(dig) - 1; d >= 0; d--) {
        res += dig[d] + '0';
        if (d % 3 == 0 && d != 0) res += ' ';
    }
    return res;
}
void power(digits result, int base, int exponent) {
    result[0] = 1;
    result[1] = -1;
    for (int i = 0; i < exponent; i++) {
        mul(result, base);
    }
}