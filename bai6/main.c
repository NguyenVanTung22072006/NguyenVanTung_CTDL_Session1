#include <stdio.h>

int count_element(int arr[], int n, int x) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            count++;
        }
    }
    return count;
}
// Do phuc tap thoi gian: O(n)
// Do phuc tap khong gian: O(1)