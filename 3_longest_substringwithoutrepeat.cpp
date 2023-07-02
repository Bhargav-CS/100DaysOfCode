#include <iostream>
#include<string>
#include<unordered_map>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
    int n = s.length();
    int maxLength = 0;
    int start = 0;
    unordered_map<char, int> charMap;

    for (int end = 0; end < n; end++) {
        char currentChar = s[end];

        
        if (charMap.find(currentChar) != charMap.end() && charMap[currentChar] >= start) {
            start = charMap[currentChar] + 1;
        }

        
        maxLength = max(maxLength, end - start + 1);

        
        charMap[currentChar] = end;
    }

    return maxLength;
}

};