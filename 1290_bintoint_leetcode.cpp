class Solution {
public:
    int getDecimalValue(ListNode* head) {
        int decimal = 0;

        while (head != nullptr) {
            decimal = (decimal << 1) + head->val; 
            head = head->next;
        }

        return decimal;
    }
};