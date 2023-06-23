int subtractProductAndSum(int n){
    int p=1,s=0,d;
    while(n!=0){
        d=n%10;
        s+=d;
        p*=d;
        n/=10;
    }
    return p-s;
}