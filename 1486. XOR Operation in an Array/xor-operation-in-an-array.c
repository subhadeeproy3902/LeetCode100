int xorOperation(int n, int start){
    int nums[n];
    for(int i=0;i<n;i++){
        nums[i]=start+ 2*i;
    }
    int a=nums[0];
    for(int j=1;j<n;j++){
        a^=nums[j];
    }
    return a;
}