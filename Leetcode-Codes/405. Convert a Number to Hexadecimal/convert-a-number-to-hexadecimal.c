char * toHex(int num){
    static char hex[9];
    sprintf(hex, "%x", num);
    return hex;
}