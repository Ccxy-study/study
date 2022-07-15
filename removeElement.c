#include <stdio.h>

int removeElement(int *nums, int size, int val);

int main()
{
    int nums[6] = {0, 2, 3, 7, 2, 5};
    int size = removeElement(nums, 6, 2);
    for (int i = 0; i < size; i++)
    {
        printf("%d", nums[i]);
    }
}

int removeElement(int *nums, int numsSize, int val)
{
    for (int i = 0; i < numsSize; i++)
    {
        if (nums[i] == val)
        {
            for (int j = i; j < numsSize - 1; j++)
            {
                nums[j] = nums[j + 1];
            }
            numsSize--;
            i--;
        }
    }
    return numsSize;
}