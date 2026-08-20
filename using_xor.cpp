#include <stdio.h>
#include <stddef.h>

// Finds the element that appears once in an array where every other element appears twice.
int find_single_number(const int* arr, size_t size) {
    int single_num = 0;
    
    // XOR every element using pointer arithmetic
    for (size_t i = 0; i < size; ++i) {
        single_num ^= *(arr + i);
    }
    
    return single_num;
}

int main(void) {
    int nums[] = {4, 1, 2, 1, 2, 8, 4};
    size_t length = sizeof(nums) / sizeof(nums[0]);

    int single = find_single_number(nums, length);

    printf("Array elements: ");
    for (size_t i = 0; i < length; ++i) {
        printf("%d ", nums[i]);
    }
    
    printf("\nSingle number found: %d\n", single);

    return 0;
}
