class Solution {
public:
    ListNode* modifiedList(std::vector<int>& nums, ListNode* head) {
        std::unordered_set<int> nums_set(nums.begin(), nums.end());
        ListNode* prev = nullptr;
        ListNode* curr = head;

        while (curr != nullptr) {
            if (nums_set.find(curr->val) != nums_set.end()) { 
                if (curr == head) {
                    head = curr->next;
                    curr = head;
                } else {
                    prev->next = curr->next;
                    curr = curr->next;
                }
            } else {
                prev = curr;
                curr = curr->next;
            }
        }
        
        return head;
    }
};
