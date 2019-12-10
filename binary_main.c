#include <stdio.h>
#include "binary.h"

int main() {
    int numbers[] = {1, 2, 5, 6, 10, 23, 45, 100, 234, 567};

    printf("Number 4 is %s on array!\n", (binary_search(numbers, sizeof(numbers) / sizeof(numbers[0]), 4) == -1 ? "not" : ""));
    printf("Number 45 is %s on array!\n", (binary_search(numbers, sizeof(numbers) / sizeof(numbers[0]), 45) == -1 ? "not" : ""));
    printf("Number 567 is %s on array!\n", (binary_search(numbers, sizeof(numbers) / sizeof(numbers[0]), 567) == -1 ? "not" : ""));
    printf("Number 1 is %s on array!\n", (binary_search(numbers, sizeof(numbers) / sizeof(numbers[0]), 1) == -1 ? "not" : ""));
    printf("Number 450 is %s on array!\n", (binary_search(numbers, sizeof(numbers) / sizeof(numbers[0]), 450) == -1 ? "not" : ""));

    return 0;
}