bool isAnagram(char * s, char * t){
    int len1 = strlen(s);
    int len2 = strlen(t);
    if (len1 != len2) {
        return false;
    }
    int count[256] = {0};
    for (int i = 0; i < len1; i++) {
        count[(int)s[i]]++;
    }
    for (int i = 0; i < len2; i++) {
        count[(int)t[i]]--;
        if (count[(int)t[i]] < 0) {
            return false;
        }
    }
    return true;
}