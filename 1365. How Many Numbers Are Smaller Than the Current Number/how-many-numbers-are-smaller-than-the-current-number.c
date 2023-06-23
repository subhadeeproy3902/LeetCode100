/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* smallerNumbersThanCurrent(int* nums, int numsSize, int* returnSize){
    int *arr,count;
    arr=(int*)malloc(numsSize*sizeof(int));
    *returnSize=numsSize;
    for(int i=0;i<numsSize;i++)
    {
        count=0;
        for(int j=0;j<numsSize;j++)
        {
            if(nums[i]>nums[j])
            count++;
        }
        arr[i]=count;
    }
    return arr;
}