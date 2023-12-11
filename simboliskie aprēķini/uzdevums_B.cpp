#include "liba.h"


void calculateExpression(digits result, int n) {
    digits pow3, pow2;

    // Вычисление 3^n
    power(pow3, 3, n);

    // Вычисление 2^n
    power(pow2, 2, n);

    
    int carry = 0;
    int maxLength = max(length(pow3), length(pow2));

    for (int i = 0; i < maxLength; i++) {

        //Есть такой вариант
        //int sum = (i < length(pow3) ? pow3[i] : 0) + (i < length(pow2) ? pow2[i] : 0) + carry;
        int sum = 0;
        if (i < length(pow3)) {
            sum += pow3[i];
        }

        if (i < length(pow2)) {
            sum += pow2[i];
        }
        
        sum += carry;
        result[i] = sum % 10;
        carry = sum / 10;
    }

}

void uzdevums_B() {
    digits result;
    int n;

    cout << "Enter n: ";
    cin >> n;

    calculateExpression(result, n);

    cout << "3^" << n << " + 2^" << n << " = " << toString(result) << endl;

}
