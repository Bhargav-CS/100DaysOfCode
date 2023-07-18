class Solution {
public:
    int strStr(string haystack, string needle) {        

    size_t index = haystack.find(needle);

    if (index != string ::npos) {
        cout << "Pattern found at index " << index << endl;
        return index;
    } else {
        cout << "Pattern not found" << endl;
        return -1;
    }
    
    }
};