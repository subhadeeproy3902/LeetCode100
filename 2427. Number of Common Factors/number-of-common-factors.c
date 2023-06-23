int commonFactors(int a, int b){
    int c=0;
    int x=a;
    if(b>a) x=b;
    if(a==b) c++;
    for(int i=1;i<x;i++){
        if(a%i==0 && b%i==0) c++;
    }
    return c;
}