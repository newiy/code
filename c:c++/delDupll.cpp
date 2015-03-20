/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *deleteDuplicates(ListNode *head) {
        if(head == NULL) return NULL;
        ListNode *prev = head;
        ListNode *cur = prev->next;
        while(cur != NULL){
            if(prev->val != cur->val){
                prev = cur;
                cur = cur->next;
            }
            else{
                prev->next = cur->next;
                cur = cur->next;
            }
        }
        return head;
    }
};