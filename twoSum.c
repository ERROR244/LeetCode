#include <stdio.h>
#include <stdlib.h>

// int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
// 	int l = 0;
// 	int i = 0;
// 	int k;
// 	int *res = malloc(numsSize * sizeof(int));

// 	while (i < numsSize) {
// 		k = 0;
// 		while (k < numsSize) {
// 			if (nums[i] + nums[k] == target && i != k) {
// 				res[l] = i;
// 				l++;
// 				res[l] = k;
// 				l++;
// 				*returnSize = l;
// 				return (res);
// 			}
// 			k++;
// 		}
// 		i++;
// 	}
// 	return NULL;
// }

int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
	int k , i;
	int *res = malloc(2 * sizeof(int));
    
	if (!nums || numsSize <= 0 || returnSize == NULL)
        return NULL;
	for (i = 0; i < numsSize; i++) {
		for (k = i; k < numsSize; k++) {
			if (nums[i] + nums[k] == target && i != k) {
				res[0] = i;
				res[1] = k;
                *returnSize = 2;
				return (res);
			}
		}
	}
	return NULL;
}

int main(void) {
	int nums[] = {2, 7, 11, 15, 6, 5, 5, 5, 7, 8};
	int target;
	int k = sizeof(nums)/sizeof(nums[0]);
	int r = 0;
	printf("enter nbr:");
	scanf("%d", &target);

	int *res = twoSum(nums, k, target, &r);
	if (res)
	{
		for (int i = 0; i < r; i++) {
			printf("%d ", res[i]);
		}
		free(res);
	}
	else
		printf("res == NULL");
}