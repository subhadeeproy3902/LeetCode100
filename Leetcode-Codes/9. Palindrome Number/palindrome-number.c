bool isPalindrome(int x){
    int d;
    int copy=x;
    long int rev=0;
    while(x>0)
    {
        d=x%10;
        x=x/10;
        rev=(rev*10)+d;
    }
    if(rev==copy) return true;
    return false;
}