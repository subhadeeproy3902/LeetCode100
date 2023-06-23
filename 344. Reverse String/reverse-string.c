void reverseString(char* s, int sSize){
    char arr[sSize];
    for(int a=0;a<sSize;a++) arr[a]=s[a];
    for(int i=sSize-1,j=0;i>=0 && j<sSize;i--, j++){
        s[j]=arr[i];
    }
}