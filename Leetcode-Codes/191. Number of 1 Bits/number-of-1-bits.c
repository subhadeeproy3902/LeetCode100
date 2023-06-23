int hammingWeight(uint32_t n) {
    int c=0;
    for(int i=0;i<32;i++){
        int x=n%2;
        if (x==1) c++;
        n/=2;
    }
    return c;
}