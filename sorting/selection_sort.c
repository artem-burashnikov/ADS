#include "selection_sort.h"

void selection_sort(size_t n, int a[static n]) {
    int mn, tmp;
    for (size_t i = 0; i < n; i++) {
        mn = i;
        for (size_t j = i + 1; j < n - 1; j++) {
            if (a[j] < a[mn]) {
                mn = j;
            }
        }
        tmp = a[i];
        a[i] = a[mn];
        a[mn] = tmp;
    }
}
