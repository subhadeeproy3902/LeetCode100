int pivotInteger(int n){
    int sum=(n*(n+1))/2;
    int rsum=0;
    for(int j=0;j<=n;j++){
        sum-=j;
        if(rsum==sum) return j;
        rsum+=j;
    }
    return -1;
}