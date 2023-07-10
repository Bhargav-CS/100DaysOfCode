class Solution {
public:
    string multiply(string num1, string num2) {
        int n1 = num1.size();
        int n2 = num2.size();
        vector<int> product(n1 + n2, 0);
        
        
        for (int i = n1 - 1; i >= 0; i--) {
            for (int j = n2 - 1; j >= 0; j--) {
                int d1 = num1[i] - '0';
                int d2 = num2[j] - '0';
                int currProduct = d1 * d2;
                
                int pos1 = i + j;
                int pos2 = i + j + 1;
                
                currProduct += product[pos2]; // Add previous carry
                product[pos1] += currProduct / 10; // Carry
                product[pos2] = currProduct % 10; // Current digit
            }
        }
        
        
        int i = 0;
        while (i < product.size() && product[i] == 0)
            i++;
        
        
        string result = "";
        for (; i < product.size(); i++)
            result += to_string(product[i]);
        
        return result.empty() ? "0" : result;
    }
};
