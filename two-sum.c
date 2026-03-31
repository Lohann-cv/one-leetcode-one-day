int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int i = 0;
    int j = 0;
    int *result = malloc(sizeof(int) * 2);
    if (!result)
        return (NULL);
    
    *returnSize = 2;
    while (i < numsSize - 1)
    {
        j = i + 1;
        while (j < numsSize )
        {
            if ((nums[i] + nums[j]) == target)
            {
                result[0] = i;
                result[1] = j;
                return (result);
            }
            j++;
        }
        i++;
    }
    return (result);
}