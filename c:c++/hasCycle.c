/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool hasCycle(struct ListNode *head) {
    if(head == NULL) return false;
    struct ListNode *slow, *fast1, *fast2;
    slow = head;
    fast1 = head;
    fast2 = head;
    //parenthesis
    while((slow != NULL) && (fast1 = fast2->next) && (fast2 = fast1->next)){
        if(slow == fast1 || slow == fast2)
            return true;
        slow = slow->next;
    }
    return false;
}