/*
Problem: Longest Palindrome Substring
Language: C
*/

#include <stdio.h>
#include <string.h>

char* longestPalindrome(char* s) {
    int len = strlen(s);
    if (len < 2) return s;

    int start = 0;
    int maxLen = 1;

    for (int i = 0; i < len; i++) {
        int left = i, right = i;
        while (left >= 0 && right < len && s[left] == s[right]) {
            if (right - left + 1 > maxLen) {
                start = left;
                maxLen = right - left + 1;
            }
            left--;
            right++;
        }
        left = i;
        right = i + 1;
        while (left >= 0 && right < len && s[left] == s[right]) {
            if (right - left + 1 > maxLen) {
                start = left;
                maxLen = right - left + 1;
            }
            left--;
            right++;
        }
    }

    s[start + maxLen] = '\0';
    return s + start;
}
