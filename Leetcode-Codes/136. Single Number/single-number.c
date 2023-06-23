int singleNumber(int* nums, int numsSize){
    int r = 0;
    for (int i = 0; i < numsSize; i++) {
        r ^= nums[i];
    }
    return r;
}