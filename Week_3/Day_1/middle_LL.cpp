class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode*t1=head;
        
        vector<int>arr;
        while(t1!=NULL)
        {
            arr.push_back(t1->val);
            t1=t1->next;

        }
        int count=0,mn=(arr.size()-1)/2;
        ListNode*t2=head;
        if(arr.size()%2==1)
        {
            while(count!=mn)
            {
                count++;
                t2=t2->next;
            }
            head=t2;
        }
        else
        {
            while(count!=mn+1)
            {
                count++;
                t2=t2->next;
            }
            head=t2;
        }
            return head;
        }
};