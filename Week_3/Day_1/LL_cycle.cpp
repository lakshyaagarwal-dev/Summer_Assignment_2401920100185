class Solution {
public:
    bool hasCycle(ListNode *head) {
        
        if (!head || !head->next) return false;
        
        
        ListNode* selfLoopNode = new ListNode(0); 
        
        ListNode* current = head;
        while (current != nullptr) {
            
            if (current->next == selfLoopNode) {
                delete selfLoopNode; 
                return true;
            }
            
            
            ListNode* nextNode = current->next;
            
            
            current->next = selfLoopNode;
            
            
            current = nextNode;
        }
        
        
        delete selfLoopNode;
        return false;
    }
};