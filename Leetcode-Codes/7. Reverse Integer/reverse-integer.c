int reverse(int x) {
    int rem = 0  ;
     
    while(x != 0){        
        int sum = x % 10 ;
        x /= 10 ;
         
        if(rem > INT_MAX/10 || rem == INT_MAX/10 && sum > 7){
            return 0 ;
        }
         
        if(rem < INT_MIN/10 || rem == INT_MIN/10 && sum < -8){
            return 0 ;
        }
         
        rem = rem*10 + sum ;
    }
     
    return rem ;
}