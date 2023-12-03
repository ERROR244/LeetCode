#include <stdio.h>
#include <stdlib.h>

int *runningSum(int *nums, int numsSize, int *returnSize)
{
  int *runningSum = (int *)malloc(numsSize * sizeof(int));
  if (!runningSum)
    return NULL;
  int sum = 0;
  for (int i = 0; i < numsSize; i++) {
    sum += nums[i];
    runningSum[i] = sum;
  }
  *returnSize = numsSize;
  return runningSum;
}
int main() {
    int nums[] = {1, 2, 3, 4};
    int numsSize = sizeof(nums) / sizeof(nums[0]);
    int returnSize;
    int* result = runningSum(nums, numsSize, &returnSize);

    if (result != NULL) {
        printf("RunningSums: ");
        for (int i = 0; i < returnSize; i++) {
            printf("%d ", result[i]);
        }
        printf("\n");
        free(result);
    } else {
        printf("Error\n");
    }

    return 0;
}
