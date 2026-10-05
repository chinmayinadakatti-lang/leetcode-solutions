#include <stdio.h>

int containsDuplicate(int* nums, int numsSize) {
    for (int i = 0; i < numsSize; i++) {
        for (int j = i + 1; j < numsSize; j++) {
            if (nums[i] == nums[j]) {
                return 1;
            }
        }
    }

    return 0;
}

int main() {
    int nums[] = {1, 2, 3, 1};
    int size = 4;

    int result = containsDuplicate(nums, size);

    printf("Contains duplicate: %s\n", result ? "true" : "false");

    return 0;
}
