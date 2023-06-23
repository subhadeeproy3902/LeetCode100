int sumOfUnique(int* nums, int numsSize){
    int count[100000] = {0};
    for (int i = 0; i < numsSize; i++) {
        count[nums[i]]++;
    }
    int sum = 0;
    for (int i = 0; i < numsSize; i++) {
        if (count[nums[i]] == 1) {
            sum += nums[i];
        }
    }
    
    return sum;

}