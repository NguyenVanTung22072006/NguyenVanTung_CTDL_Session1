//Bai-1

#include <stdio.h>

int main() {
    for (int i = 0; i < n; i++) {
        printf("Hello\n");
    }
    return 0;
} // Do phuc tap thoi gian: O(n)



//Bai-2

void printDouble(int n) {
    int i = 1;
    while (i < n) {
        printf("%d\n", i);
        i *= 2;
    }
} // Do phuc tap thoi gian: O(log n)


//Bai-3

int* mallocArray(int n) {
    int* arr = (int*)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        arr[i] = i;
    }
    return arr;
} // Do phuc tap khong gian: O(n)