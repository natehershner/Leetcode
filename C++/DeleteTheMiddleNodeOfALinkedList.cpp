/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        int cnt = 0;
        ListNode* curr = head;
        while (curr){
            cnt++;
            curr = curr->next;
        }
        int mid = cnt / 2;
        cnt = 0;
        curr = head;
        ListNode* prev = nullptr;
        while(curr){
            if (cnt == mid){
                if (prev == nullptr) return nullptr;
                prev->next = curr->next;
                curr->next = nullptr;
                return head;
            }
            cnt++;
            prev = curr;
            curr = curr->next;
        }
        return nullptr;
    }
};