int divide(int dividend, int divisor){
    int a;
    if (divisor == 0 || (dividend == INT_MIN && divisor == -1)) {
        return INT_MAX;
    }
    a=dividend/divisor;
    return a;
} 