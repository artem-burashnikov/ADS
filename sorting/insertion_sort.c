#include "insertion_sort.h"

void insertion_sort(size_t n, int a[static n]) {
    int x;
    size_t i, j;
    i = j = 0;
    while (i < n) {
        x = a[i];
        j = i;
        while (j > 0 && a[j - 1] > x) {
            a[j] = a[j - 1];
            j--;
        }
        a[j] = x;
        i++;
    }
}
