int reverse(int x) {
    int c[10] = {0};
    int i = 0, j = 1;
    int res = 0;
    int sign = x>0? 1:-1;
    int tmp = x * sign;
    
    while(tmp) {
        c[i++] = (tmp % 10);
        tmp /= 10;
    }

    res = c[0];
    while(j < i) {
        int t = res;
        res = c[j] + res * 10;
        
        if((res - c[j]) / 10 != t) {
            return 0;
        }
        
        j++;
    }
    
    return res * sign;
}
