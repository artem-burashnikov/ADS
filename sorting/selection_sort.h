#pragma once

#include <stddef.h>

/**
 * @brief Sorts an array in ascendind order using the bubble sort algorithm.
 *
 * @param n The number of elements in the array.
 * @param a The array to be sorted.
 */
void selection_sort(size_t n, int a[static n]);
