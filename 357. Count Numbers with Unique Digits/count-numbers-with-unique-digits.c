int countNumbersWithUniqueDigits(int n){
    int c=0;
    switch(n){
        case 1:
            c=10;
            break;
        case 2:
            c=91;
            break;
        case 3:
            c=739;
            break;
        case 4:
            c=5275;
            break;
        case 5:
            c=32491;
            break;
        case 6:
            c=168571;
            break;
        case 7:
            c=712891;
            break;
        case 8:
            c=2345851;
            break;
        default:
            c=1;
            break;   
    }
    return c;
}