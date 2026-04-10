#include "bit_advanced.h"

int turnOffIdxBit(int num, int idx) {
    // num = 5; 00101;
    // idx = 2;
    return num & ~(1 << idx); // 1; 00001
}

int xorIdxBit(int num, int idx) {
    // num = 5; 00101;
    // idx = 1;
    return num ^ (1 << idx); // 7; 00111
}

int findLowestSetBit(int num) {
    // num = 18; 10010;
    return num & -num; // 2; 00010
}

int setAllBits(int n) {
    // n = 5;
    return (1 << n) - 1; // 31; 11111
}

int turnOnIdxBit(int num, int idx) {
    // num = 5; 00101;
    // idx = 1;
    return num | (1 << idx); // 7; 00111
}

bool checkIdxBit(int num, int idx) {
    // num = 5; 00101;
    // idx = 1;
    return (num & (1 << idx)); // false;
}