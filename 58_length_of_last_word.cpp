class Solution {
public:
    int lengthOfLastWord(string s) {
        int length = 0;
        int n = s.length();
        int i = n - 1;
        
        // Skip trailing whitespaces
        while (i >= 0 && s[i] == ' ')
            i--;
        
        // Count the length of the last word
        while (i >= 0 && s[i] != ' ') {
            length++;
            i--;
        }
        
        return length;
    }
};
