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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        if (!head) return nullptr;
        if (!head->next) return head;
        ListNode* curr = head->next;
        ListNode* prev = head;
        while (curr){
            ListNode* newNode = new ListNode(gcd(prev->val, curr->val));
            prev->next = newNode;
            newNode->next = curr;
            prev = curr;
            curr = curr->next;
        }
        return head;
    }
};