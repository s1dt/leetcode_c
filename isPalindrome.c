bool isPalindrome(int x) {
    int t = 1;
    
    if(x < 0) {
        return false;
    }
    
    while(x / t >= 10) {
        t *= 10;
    }
    
    while(x > 0) {
        if(x / t != x % 10) {
            return false;
        }
        x = (x % t);
        x /= 10;
        t /= 100;
    }
    
    return true;
}
