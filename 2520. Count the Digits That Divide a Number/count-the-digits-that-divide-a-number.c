int countDigits(int n){
    int c=0,t=n;
    while(n!=0){
        int d=n%10;
        if(t%d==0) c++;
        n/=10;
    }
    return c;
}