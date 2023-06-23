bool isPalindrome(char * s){
        char* left = s;
        char* right = s + strlen(s) - 1;
        while (left < right)
                if (!isalnum(*left))
                left++;
                else if (!isalnum(*right))
                right--;
                else if (tolower(*left++) != tolower(*right--))
                return false;
        return true;
}