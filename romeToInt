int char2Val(char in)
{
    int res;
    
    switch(in)
    {
        case 'I': res = 1;
            break;
            
        case 'V': res = 5;
            break;
            
        case 'X': res = 10;
            break;
            
        case 'L': res = 50;
            break;
            
        case 'C': res = 100;
            break;
            
        case 'D': res = 500;
            break;
            
        case 'M': res = 1000;
            break;
            
        default: res = 0;
            break;
    }
    
    return res;
}

int romanToInt(char* s) {
    int i = 0;
    int res = 0;
    
    while(s[i]) {
        int tmp;
        int p, q;
        
        p = char2Val(s[i]);
        q = char2Val(s[i+1]);
        
        if(p < q) {
            tmp = q - p;
            i += 2;
        }
        else {
            tmp = p;
            i++;
        }
        res += tmp;
    }
    
    return res;
}
