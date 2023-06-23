int addDigits(int num){
    int sum=10,d;
    while(sum>9){
        sum=0;
        while(num!=0){
            d=num%10;
            num/=10;
            sum = sum + d;
        }
        if (sum>9) num=sum;
    }
    return sum;
}