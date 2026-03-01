/*
Problem: Longest Substring Without Repeating Characters
Language: C
*/
#include <stdio.h>
#include <string.h>

int lengthOfLongestSubstring(char *s) {
    int lastIndex[128];
    for (int i = 0; i < 128; i++) {
        lastIndex[i] = -1;
    }

    int maxLength = 0;
    int start = 0;

    for (int i = 0; s[i] != '\0'; i++) {
        if (lastIndex[s[i]] >= start) {
            start = lastIndex[s[i]] + 1;
        }

        lastIndex[s[i]] = i;

        int currentLength = i - start + 1;
        if (currentLength > maxLength) {
            maxLength = currentLength;
        }
    }

    return maxLength;
}
