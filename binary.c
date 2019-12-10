#include "binary.h"
#include <stdio.h>
int binary_search(int* items, int size, int x) {
    int lower_bound = 0; 
    int upper_bound = size - 1;

    while (lower_bound <= upper_bound) {
        int center = (lower_bound + upper_bound) / 2;

        if (items[center] < x) {
            lower_bound = center + 1;
        } else if (items[center] > x) {
            upper_bound = center - 1;
        } else {
            return 1;
        }
    }

    return -1;
}