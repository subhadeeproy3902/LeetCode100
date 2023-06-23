bool isPowerOfThree(int n){
    if(n==1) return true;
    for(int i=0;i<=sqrt(n);i++) if(pow(3,i)==n) return true;
    return false;
}