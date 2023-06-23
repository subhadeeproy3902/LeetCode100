int strStr(char * haystack, char * needle){
    char *result = strstr(haystack, needle);
    if (result!=NULL) return (result - haystack);
    return -1;
}