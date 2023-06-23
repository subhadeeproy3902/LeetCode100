int compare_ints(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int missingNumber(int* nums, int numsSize){
    int c;
    qsort(nums, numsSize, sizeof(int), (const void *) compare_ints);
    for(int i=0,j=0;i<numsSize && j<numsSize;i++,j++){
        if(nums[i]!=j){
            c=j;
            break;
        }
    }
    return c;
}