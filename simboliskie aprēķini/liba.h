#pragma once
#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

typedef int digits[1000];

void uzdevums_A();
void uzdevums_B();
void uzdevums_C();
void uzdevums_D();

string toString(digits dig);
int length(digits dig);
void mul(digits num, int multiplier);
void power(digits result, int base, int exponent);
