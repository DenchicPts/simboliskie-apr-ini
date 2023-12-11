#include "liba.h"
/*
typedef int digits[1000];

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
*/

// Функция вычисления факториала для числа n
void factorial(digits result, int n) {
    result[0] = 1;  // Инициализация результата
    result[1] = -1; // Завершение массива числа

    for (int i = 2; i <= n; i++) {
        mul(result, i);// Умножение текущего результата
    }
}

void uzdevums_A() {
    digits result;

    // факториал для n = 30
    factorial(result, 30);
    cout << "30! = " << toString(result) << endl;

    // факториал для n = 50
    factorial(result, 50);
    cout << "50! = " << toString(result) << endl;

}
