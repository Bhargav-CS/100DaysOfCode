class Solution {
public:
    int myAtoi(string str) {
        int sign = 1;
        int result = 0;
        int i = 0;
        int n = str.length();
        
        while (i < n && str[i] == ' ')
            i++;
        
        
        if (i < n && (str[i] == '+' || str[i] == '-')) {
            sign = (str[i] == '-') ? -1 : 1;
            i++;
        }
        
        
        while (i < n && isdigit(str[i])) {
            int digit = str[i] - '0';
            
            
            if (result > INT_MAX / 10 || (result == INT_MAX / 10 && digit > INT_MAX % 10)) {
                return (sign == 1) ? INT_MAX : INT_MIN;
            }
            
            result = result * 10 + digit;
            i++;
        }
        
        return result * sign;
    }
};
