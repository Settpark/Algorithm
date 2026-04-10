#include "bit_basics.h"

int andOperation(int num1, int num2) {
    // num1 = 18; 10010
    // num2 = 2; 00010
    return num1 & num2; // 2
}

int orOperation(int num1, int num2) {
    // num1 = 18; 10010
    // num2 = 2; 00010
    return num1 | num2; // 20; 10100
}

int leftShift(int num, int count) {
    // num = 4; 00100;
    // count = 2;
    return num << count; // 16; 10000
}

int rightShift(int num, int count) {
    // num = 4; 00100;
    // count = 2;
    return num >> count; // 1; 00001
}

int xorOperation(int num1, int num2) {
    // num1 = 18; 10010
    // num2 = 2; 00010
    return num1 ^ num2; // 18 ^ 2 = 16; 10000
}

int onesComplement(int num) {
    // num = 5; 00101;
    return ~num; // ~5 = -6; 11111010
}