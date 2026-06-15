class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        
        ListNode* dummy = new ListNode(0);
        ListNode* curr = head;
        
        while (curr != nullptr) {
        
            ListNode* nextNode = curr->next;
            
        
            curr->next = dummy->next;
            dummy->next = curr;
            
        
            curr = nextNode;
        }
        
        ListNode* newHead = dummy->next;
        delete dummy;
        return newHead;
    }
};