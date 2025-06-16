#include <stdio.h>

// Cach 1
int sum_1(int n) {
    int total = 0;
    for (int i = 1; i <= n; i++) {
        total += i;
    }
    return total;
}// Do phuc tap khong gian: O(1)


// Cach 2
int sum_2(int n) {
    return n * (n + 1) / 2;
}// Do phuc tap khong gian: O(1)