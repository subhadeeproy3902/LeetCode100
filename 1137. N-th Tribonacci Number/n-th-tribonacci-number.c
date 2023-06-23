int tribonacci(int n){
    if (n == 0) return 0;
    if (n == 1 || n == 2) return 1;
    int t0 = 0;
    int t1 = 1;
    int t2 = 1;
    int tn = 0;
    int i;     
    for (i = 3; i <= n; i++) {
        tn = t0 + t1 + t2;
        t0 = t1;
        t1 = t2;
        t2 = tn;
    }     
    return tn;
}