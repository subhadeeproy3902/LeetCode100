int myAtoi(char * input){
    int i = 0;
    int sign = 1;
    long int result = 0;
    while (isspace(input[i])) {
        i++;
    }
    if (input[i] == '-' || input[i] == '+') {
        sign = (input[i] == '-') ? -1 : 1;
        i++;
    }

    while (isdigit(input[i])) {
        int digit = input[i] - '0';
        if (result < INT_MIN / 10 || (result == INT_MIN / 10 && digit >= -(INT_MIN % 10))) {
            return (sign == 1) ? INT_MAX : INT_MIN;
        }

        result = (result * 10) - digit;
        i++;
    }
    result *= sign*-1;

    return result;
}