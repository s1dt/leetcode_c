char* longestCommonPrefix(char** strs, int strsSize) {
    int len = 0;
    int i, j;
    char * res = NULL;
    
    if(strs == NULL) {
        return res;
    }
    
    for(i = 0; i < strlen(strs[0]); i++) {
        for(j = 1; j < strsSize; j++) {
            if((strlen(strs[j]) <= i) || (strs[0][i] != strs[j][i])) {
                break;
            }
        }
        if(j == strsSize) {
            len++;
        }
        else {
            break;
        }
    }
    
    if(len > 0) {
        res = malloc(len + 1);
        memcpy(res, strs[0], len);
        res[len] = '\0';
    }
    
    return res;
}
