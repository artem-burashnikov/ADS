#include "merge_sort.h"

static void merge(int a[], size_t i_begin, size_t i_middle, size_t i_end,
                  int buff[]) {
    size_t i, j, k; 
    
    i = i_begin;
    j = i_middle;

    for (k = i_begin; k < i_end; k++) {
        if ((i < i_middle) && ((j >= i_end) || (buff[i] <= buff[j]))) {
            a[k] = buff[i];
            i++;
        } else {
            a[k] = buff[j];
            j++;
        }
    }
}

static void split_merge(int a[], size_t i_begin, size_t i_end, int buff[]) {
    if (i_end - i_begin <= 1)
        return;

    size_t i_middle = i_begin + (i_end - i_begin) / 2;

    split_merge(buff, i_begin, i_middle, a);
    split_merge(buff, i_middle, i_end, a);
    merge(a, i_begin, i_middle, i_end, buff);
}

void merge_sort(size_t n, int a[static n]) {
    int buff[n];

    if (n < 2)
        return;

    if (!memcpy(buff, a, n * sizeof(*a)))
        return;

    split_merge(a, 0, n, buff);
}
