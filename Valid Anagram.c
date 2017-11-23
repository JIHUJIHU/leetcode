bool isAnagram(char* s, char* t) {
    int a[26]={0},i=0;


    while (s[i] != '\0') {
        a[s[i]-'a']++;
        i++;
    }
    i=0;
    while (t[i] != '\0') {
        a[t[i]-'a']--;
        i++;
    }

    for (i = 0 ; i < 26 ; i++) {
        if (a[i] != 0) {
            return false;
        }
    }
    return true;
}

