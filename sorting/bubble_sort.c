#include "bubble_sort.h"

void bubble_sort(size_t n, int a[static n]) {
    int tmp;
    for (size_t i = 0; i < n; i ++) {
        for (size_t j = 0; j < (n - i) - 1; j++) {
            if (a[j + 1] <= a[j]) {
                tmp = a[j + 1];
                a[j + 1] = a[j];
                a[j] = tmp;
            }
        }
    }
}
