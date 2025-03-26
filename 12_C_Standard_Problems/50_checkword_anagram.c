#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
#include <string.h>

bool isAnagram(char *str1, char *str2);

int main() {
    char w1[10];
    char w2[10];
    printf("Enter word1 \n");
    gets(w1);
    printf("Enter word1 \n");
    gets(w2);
    if (isAnagram(w1, w2)) {
        printf("\"%s\" and \"%s\" are anagrams.\n", w1, w2);
    } else {
        printf("\"%s\" and \"%s\" are not anagrams.\n", w1, w2);
    }
    return 0;
}

bool isAnagram(char *str1, char *str2) {
    // If lengths don't match, they can't be anagrams
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    if (len1 != len2) {
        return false;
    }
    // Create frequency arrays for lowercase letters
    int w1lc[26] = {0};
    int w2lc[26] = {0};

    // Populate frequency arrays for both strings
    for (int i = 0; i < len1; i++){
        w1lc[tolower(str1[i]) - 'a']++;
        w2lc[tolower(str2[i]) - 'a']++;
    }

    // Compare the frequency arrays
    for (int i = 0; i < 26; i++) {
        if (w1lc[i] != w2lc[i]) {
            return false;
        }
    }
    return true;
}