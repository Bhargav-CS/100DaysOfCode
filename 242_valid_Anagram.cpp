class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) { 
            return false;
        }
        unordered_map<char, int> freq; 
        for (int i = 0; i < s.length(); i++) {
            freq[s[i]]++; 
        }
        for (int i = 0; i < t.length(); i++) {
            if (freq[t[i]] == 0) { 
                return false;
            }
            freq[t[i]]--; 
        }
        return true; 
    }
};
